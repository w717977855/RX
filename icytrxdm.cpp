/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "stdint.h"
#include "mbed.h"
#include "icytrxdm.h"
#include "reg_map.h"

extern Serial pc;

void icytrxdm::init(SPI *spi_param,DigitalOut *cs_param,DigitalOut *nrst_param,DigitalOut *ok_vddd_param,DigitalOut *dig_e_param){
    //reset icytrx
    spi=spi_param;
    cs=cs_param;
    nrst=nrst_param;
    ok_vddd=ok_vddd_param;
    dig_e=dig_e_param;
    *cs=1;
    power_cycle();
    wait(0.1);
    REG_COMMANDS      = ICYTRXDM_COMMANDS_ADDR;
    REG_PT_CMD        = ICYTRXDM_PROT_TIMER_ADDR;
    REG_BLE_DTM       = ICYTRXDM_TX_BLE_DTM_ADDR;
    REG_CHANNEL       = ICYTRXDM_CHANNEL_ADDR;
    REG_SEQ_CONF      = ICYTRXDM_SEQUENCER_CONFIG_ADDR;
    REG_PT_DELTA_TS_0 = ICYTRXDM_PT_DELTA_TS_0_ADDR;
    REG_PT_DELTA_TS_1 = ICYTRXDM_PT_DELTA_TS_1_ADDR;
    REG_IRQ_STATUS    = ICYTRXDM_IRQ_STATUS_ADDR;
    REG_RXPH_STATUS   = ICYTRXDM_RXPH_STATUS_ADDR;
    REG_RSSI_PKT      = ICYTRXDM_RSSI_PKT_ADDR;
    REG_CFO           = ICYTRXDM_CFO_ADDR;
    REG_AGC           = ICYTRXDM_AGC_ATTENUATION_ADDR;
}

void icytrxdm::power_cycle(){
    wait(0.1);
    *dig_e =0;
    *ok_vddd=0;
    *nrst=0;
    wait(0.01);
    *nrst = 1;
    //wait(0.01);
    *dig_e = 1;
    wait(0.01);
    *ok_vddd = 1;
}

void icytrxdm::hard_rst(){
    hard_rst(1);
}

void icytrxdm::hard_rst(int v){
    *ok_vddd = 0;
    *dig_e = 0;
    *cs = 0;
    wait(0.1*v);
    *dig_e = 1;
    wait(0.1*v);
    *ok_vddd=1;
    wait(0.1*v);
    *cs = 1;    
}

void icytrxdm::soft_rst(){
    write_reg(REG_COMMANDS,(uint8_t)0xf0);
}

uint8_t icytrxdm::read_reg(uint16_t addr){
    uint8_t r;
    *cs = 0;
    spi->write((addr&0xf00)>>8);
    spi->write(addr&0xff);
    r=(uint8_t)spi->write(0x00);
    *cs = 1;
    return r;
}

void icytrxdm::write_reg(uint16_t addr,uint8_t data){
    *cs = 0;
    spi->write(0x30+((addr&0xf00)>>8));
    spi->write(addr&0xff);
    spi->write(data);
    *cs = 1;
}

void icytrxdm::read_burst(uint16_t addr,uint8_t *data,int ll){
    int i;
    *cs = 0;
    spi->write((addr&0xf00)>>8);
    spi->write(addr&0xff);
    for(i=0;i<ll;i++)
        data[i]=(uint8_t)spi->write(0x00);
    *cs = 1;
}

void icytrxdm::write_burst(uint16_t addr,uint8_t *data,int ll){
    int i;
    *cs = 0;
    spi->write(0x30+((addr&0xf00)>>8));
    spi->write(addr&0xff);
    for(i=0;i<ll;i++){
        spi->write(data[i]);
    }
    *cs = 1;
}

void icytrxdm::write_burst_dummy(uint16_t addr,uint8_t *data,int ll){
    int i;
    for(i=0;i<ll;i++){
        this->write_reg(addr+i, data[i]);
    }
}


int icytrxdm::get_rssi(){
    return read_reg(REG_RSSI_PKT);
}

int icytrxdm::get_agc(){
    return read_reg(REG_AGC);
}

int icytrxdm::get_fei(){
    uint8_t fei[2];
    int fei_long;
    read_burst(REG_CFO,fei,2);
    fei_long = ((int)fei[0])+(((int)(fei[1]))<<8);
    if(fei_long>=32768)
        fei_long -= 65536;
    return fei_long;
}