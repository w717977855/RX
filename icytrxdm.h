/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "mbed.h"

#ifndef ICYTRXDM

#define ICYTRXDM

class icytrxdm {
     SPI *spi;
     DigitalOut *cs;
     DigitalOut *dig_e;
     DigitalOut *ok_vddd;
     DigitalOut *nrst;

     // Public info and functions
     public:
     //icytrxdm();
     void init(SPI *spi_param,DigitalOut *cs_param,DigitalOut *nrst_param,DigitalOut *ok_vddd_param,DigitalOut *dig_e_param);
     void hard_rst();
     void power_cycle();
     void hard_rst(int v);
     void soft_rst();
     uint8_t read_reg(uint16_t);
     void write_reg(uint16_t,uint8_t);
     void read_burst(uint16_t,uint8_t *,int);
     void write_burst(uint16_t,uint8_t *,int);
     void write_burst_dummy(uint16_t,uint8_t *,int);
     
     int get_rssi();
     int get_fei();
     int get_agc();
     uint16_t REG_COMMANDS;
     uint16_t REG_PT_CMD;
     uint16_t REG_BLE_DTM;
     uint16_t REG_CHANNEL;
     uint16_t REG_SEQ_CONF;
     uint16_t REG_PT_DELTA_TS_0;
     uint16_t REG_PT_DELTA_TS_1;
     uint16_t REG_IRQ_STATUS;
     uint16_t REG_RXPH_STATUS;
     uint16_t REG_RSSI_PKT;
     uint16_t REG_CFO;
     uint16_t REG_AGC;
     
};


#endif