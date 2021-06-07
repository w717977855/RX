/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "config.h"
#include "mbed.h"
#include "icytrxdm.h"
#include "pc_cmds.h"
#include "hci.h"
#include "rx_stats.h"
#include "reg_map.h"
#include "firmware/firmware.h"

const char *fw_version = "v2.0";
const char *chip_name = "icyTRx-DM_testchip_v2b";   // to be taken from CHIP_ID in the future
const char *config_version = "ble_v2";  // changed from "beta", to be changed dynamically in the future
//#define OLD_MBED_MOTHERBOARD

DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);
DigitalOut myled4(LED4);
#ifdef SWITCH_SER
Serial pc(p9, p10);
Serial cmw(USBTX, USBRX);
#else
Serial cmw(p9, p10);
Serial pc(USBTX, USBRX);
#endif
SPI spi1(p5, p6,  p7);  // mosi, miso, sclk
DigitalOut cs1(p8);
DigitalOut nrst1(p30);
DigitalOut gpio_direction(p28);
DigitalOut iref_e(p27);
DigitalOut ldo_e(p26);
#ifdef OLD_MBED_MOTHERBOARD
DigitalOut dig_e(p20);
DigitalOut ok_vddd(p19);
#else
DigitalOut dig_e(p19);
DigitalOut ok_vddd(p20);
#endif
Ticker knight_rider;
InterruptIn rx_end(p11); //GPIO 9
InterruptIn sync_detect(p12); //GPIO 8
icytrxdm itrxdm;
int rx_pkt;
int chip_id;

extern int cmds_w;
extern int cmds_r;
extern int hciw;
extern int hcir;
extern uint8_t lna_att_inst;
extern uint8_t lna_gain_inst;
extern uint8_t bqf1_gain_inst;
extern uint8_t bqf2_gain_inst;

uint8_t tx_tst=0;
uint8_t rx_tst=0;


void knightRider(){
    static uint8_t cnt=0;
    static uint8_t subcnt=0;
    uint8_t lim;
    lim=5;
    if(tx_tst==1)
        lim=3;
    if(rx_tst==1)
        lim=2;
    subcnt++;
    if(subcnt<lim){
        return;
    }
    myled1=myled2=myled3=myled4=0;
    switch(cnt){
        case 0:
            myled1=1;
            break;
        case 1:
        case 5:
            myled2=1;
            break;
        case 2:
        case 4:
            myled3=1;
            break;
        case 3:   
            myled4=1;
            break;
    }
    cnt++;
    subcnt=0;
    if(cnt==6)
        cnt=0; 
}


void syncDetect(){
    uint8_t reg[2];
    itrxdm.read_burst(0x248, reg, 2);
    lna_att_inst = reg[0]&0x1;
    lna_gain_inst = (reg[0]&0x30)>>4;
    bqf1_gain_inst = (reg[1]&0x3);
    bqf2_gain_inst = (reg[1]&0x30)>>4;
}

void rxCheck(){
    uint8_t rxph_st;
    itrxdm.read_reg(itrxdm.REG_IRQ_STATUS);
    itrxdm.read_reg(itrxdm.REG_IRQ_STATUS+1);
    rxph_st = itrxdm.read_reg(itrxdm.REG_RXPH_STATUS);
    if(rx_tst == 1){
      if(rxph_st==1){
        rx_pkt = rx_pkt+1;
        syncDetect();
        rx_stats();
      }
      itrxdm.write_reg(itrxdm.REG_COMMANDS, 0x12);
    }
}

int main() {
    chip_id = 0;
    
    myled1 = 1;
    while(chip_id!=0x10){  // FIXME: To be replaced with valid CHIP_IDs
        ldo_e = 0;
        iref_e = 0;
        wait(0.1);
        ldo_e = 1;
        iref_e = 1;
        gpio_direction = 1;
        
        spi1.format(8, 0);
        spi1.frequency(8000000);
        cs1 = 1;
        itrxdm.init(&spi1, &cs1, &nrst1, &ok_vddd, &dig_e);
        wait(0.1);
        chip_id = itrxdm.read_reg(0x3FF);   // FIXME: To be replaced with CHIP_ID definition
    };
    myled2 = 1;
    

    pc.baud(115200);
    pc.attach(&pccmd_irq);
    
    cmw.baud(115200);
    cmw.attach(&hci_irq);    
    
    rx_end.rise(&rxCheck);
    
    // Load icytrx-dm configuration
    // This should be eventually updated with a version check, and possibly moved to a function
    itrxdm.write_burst_dummy(ICYTRXDM_MAIN_CONFIG_BASEADDR,   (uint8_t *)ICYTRXDM_MAIN_CONFIG,   sizeof(ICYTRXDM_MAIN_CONFIG));
    itrxdm.write_burst_dummy(ICYTRXDM_ADPLL_CONFIG_BASEADDR,  (uint8_t *)ICYTRXDM_ADPLL_CONFIG,  sizeof(ICYTRXDM_ADPLL_CONFIG));
    itrxdm.write_burst_dummy(ICYTRXDM_TXPH_CODE_BASEADDR,     (uint8_t *)ICYTRXDM_TXPH_CODE,     sizeof(ICYTRXDM_TXPH_CODE));
    itrxdm.write_burst_dummy(ICYTRXDM_RXPH_CODE_BASEADDR,     (uint8_t *)ICYTRXDM_RXPH_CODE,     sizeof(ICYTRXDM_RXPH_CODE));
    itrxdm.write_burst_dummy(ICYTRXDM_AGC_CODE_BASEADDR,      (uint8_t *)ICYTRXDM_AGC_CODE,      sizeof(ICYTRXDM_AGC_CODE));
    itrxdm.write_burst_dummy(ICYTRXDM_SEQUENCER_ADDR,         (uint8_t *)ICYTRXDM_SEQ_ADDR,      sizeof(ICYTRXDM_SEQ_ADDR)); // SEQUENCER register contains the addresses (offsets) of each sequence, loaded from ICYTRXDM_SEQ_ADDR
    itrxdm.write_burst_dummy(ICYTRXDM_SEQ_CODE_BASEADDR,      (uint8_t *)ICYTRXDM_SEQ_CODE,      sizeof(ICYTRXDM_SEQ_CODE)); // This is the actual memory space of the sequencer
    myled3 = 1;
    
    itrxdm.write_reg(ICYTRXDM_GPIO_CONF_8_9_ADDR, 0xB);     // gpio_conf_8 = 0xB
    itrxdm.write_reg(ICYTRXDM_GPIO_CONF_8_9_ADDR+1, 0xA);   // gpio_conf_9 = 0xA
    itrxdm.write_reg(ICYTRXDM_INTERFACE_ADDR, 0x01);        // rrmu_spi_forward = 0 (clears bit 4)
    itrxdm.write_reg(ICYTRXDM_SPI_CONF_ADDR, 0x08);         // spi_is_sync = 1
    
    knight_rider.attach(&knightRider,0.02);
    while(1){
        if(cmds_w!=cmds_r)
            pccmd();
        if(hciw!=hcir)
            parsehci();
            
    }
}
