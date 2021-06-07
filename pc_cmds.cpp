/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "mbed.h"
#include "pc_cmds.h"
#include "icytrxdm.h"
#include "hci.h"

char mem[256];
char cmds[256];
int cmds_w = 0;
int cmds_r = 0;

extern char *fw_version;
extern char *chip_name;
extern char *config_version;
extern icytrxdm itrxdm;
extern Serial pc;
extern InterruptIn sync_detect; 
extern InterruptIn rx_end; 

extern uint8_t dump;
extern double rssi_max;
extern double rssi_min;
extern double rssi_avg;
extern double rssi_std;
extern double fei_max;
extern double fei_min;
extern double fei_avg;
extern double fei_std;
extern double agc_max;
extern double agc_min;
extern double agc_avg;
extern double agc_std;
extern double lna_att_avg;
extern double lna_gain_avg;
extern double bqf1_gain_avg;
extern double bqf2_gain_avg;
extern bool dump_info;
extern uint8_t is_tx;
extern uint8_t is_rx;

void pccmd_irq(){
    cmds[cmds_w++]=pc.getc();
    cmds_w%=256;
}

void pccmd(){
    static int depth=0;
    static int addr;
    static char cmd,subcmd,v;
    static int channel,pkt_len,pkt_type;
    int k;

    switch(depth){
      case 0:
        cmd=cmds[cmds_r++];
        switch(cmd){
            case 'h':
                // TODO: Synchronize
                pc.printf("\nHelp\nList of available commands:\n");
                pc.printf("  - h: shows this help\n");
                pc.printf("  - v : return the chip and configuration version\n");
                pc.printf("  - V : return only the configuration version\n");
                pc.printf("  - W : return only the chip version\n");
                pc.printf("  - F : return the Firmware version\n");                
                pc.printf("  - I : print info on DTM\n");                
                pc.printf("  - D : dump Rx stats data\n");                
                pc.printf("  - A : enable AGC stats (requires sync_detect IRQ on GPIO8)\n");
                pc.printf("  - a : disable AGC stats\n");
                pc.printf("  - L : labo tests, disable IRQs\n");
                pc.printf("  - R : hard reset\n");
                pc.printf("  - S : soft reset\n");
                pc.printf("  - w<addr MSB><addr LSB><data>: write data to address addr\n");
                pc.printf("  - r<addr MSB><addr LSB><len>: read data to address addr. len data are returned\n");
                pc.printf("  - TT<channel><packet length><packet type> : start test Tx in channel ... with length...\n");
                pc.printf("  - TR<channel><packet type> : start test Rx in channel ... of packet type...\n");
                pc.printf("  - TE : stop tests\n");
                pc.printf(" - g<value><meas> : get value\n");
                pc.printf("     Value types:\n");
                pc.printf("     - f : FEI\n");
                pc.printf("     - r : RSSI\n");
                pc.printf("     - a : AGC\n");
                pc.printf("     - l : LNA att\n");
                pc.printf("     - L : LNA gain\n");
                pc.printf("     - b : BQF1 gain\n");
                pc.printf("     - B : BQF2 gain\n");
                //pc.printf("     - q : Link Quality\n");
                pc.printf("     Meas types:\n");
                pc.printf("     - a : average\n");
                pc.printf("     - s : standard deviation\n");
                pc.printf("     - i : minimum value\n");
                pc.printf("     - x : maximum value\n");

                break;
            case 'v':
                pc.printf("%s, %s",chip_name,config_version);
                break;
            case 'V':
                pc.printf("%s",config_version);
                break;
            case 'F':
                pc.printf("%s",fw_version);
                break;
            case 'W':
                pc.printf("%s",chip_name);
                break;
            case 'D':
                dump = 1 - dump;
                break;
            case 'I':
                dump_info = ! dump_info;
                break;
            case '\n':
                pc.printf("\n");
                break;
            case 'w':
            case 'r':
                depth=1;
                break;
            case 'T':
                depth=1;
                break;
            case 'R':
                itrxdm.hard_rst();
                break;
            case 'S':
                itrxdm.soft_rst();
                break;
            case 'L':
                rx_end.disable_irq();
                break;
            case 'g':
                depth=1;
                break;
            case 'A':
                sync_detect.enable_irq();
                break;
            case 'a':
                sync_detect.rise(0);
                break;
            default:
                break;
        }
        break;
      case 1:
        subcmd=cmds[cmds_r++];
        switch(cmd){
            case 'r':
            case 'w':
               addr=(subcmd&0xf)<<8;
               depth=2;
               break;
            case 'T':
                switch(subcmd){
                    case 'T':
                        depth=2;
                        break;
                    case 'R':
                        depth=2;
                        break;
                    case 'E':
                        if(is_tx==1)
                            stop_test_tx();
                        if(is_rx==1)
                            stop_test_rx();
                        depth=0;
                        break;
                    default:
                        depth=0;
                        break;
                }
                break;
            case 'g':
                switch(subcmd){
                    case 'f':
                    case 'r':
                    case 'a':
                    case 'l':
                    case 'L':
                    case 'b':
                    case 'B':
                        depth=2;
                        break;
                    default:
                        depth=0;
                        break;
                }
                break;
            default:
               depth=0;
               break;
        }
        break;
      case 2:
        v=cmds[cmds_r++];
        switch(cmd){
            case 'r':
            case 'w':
               addr|=(v&0xff);
               depth=3;
               break;
            case 'T':
                channel=v;
                depth=3;
                break;
            case 'g':
                switch(subcmd){
                    case 'f':
                        switch(v){
                            case 'a':
                                pc.printf("%f",fei_avg);
                                break;
                            case 's':
                                pc.printf("%f",fei_std);
                                break;
                            case 'i':
                                pc.printf("%f",fei_min);
                                break;
                            case 'x':
                                pc.printf("%f",fei_max);
                                break;
                        }
                        break;
                    case 'r':
                        switch(v){
                            case 'a':
                                pc.printf("%f",rssi_avg);
                                break;
                            case 's':
                                pc.printf("%f",rssi_std);
                                break;
                            case 'i':
                                pc.printf("%f",rssi_min);
                                break;
                            case 'x':
                                pc.printf("%f",rssi_max);
                                break;
                        }
                        break;
                    case 'a':
                        switch(v){
                            case 'a':
                                pc.printf("%f",agc_avg);
                                break;
                            case 's':
                                pc.printf("%f",agc_std);
                                break;
                            case 'i':
                                pc.printf("%f",agc_min);
                                break;
                            case 'x':
                                pc.printf("%f",agc_max);
                                break;
                        }
                        break;
                    case 'l':
                        pc.printf("%f",lna_att_avg);
                        break;
                    case 'L':
                        pc.printf("%f",lna_gain_avg);
                        break;
                    case 'b':
                        pc.printf("%f",bqf1_gain_avg);
                        break;
                    case 'B':
                        pc.printf("%f",bqf2_gain_avg);
                        break;
                    }
                    depth=0;
                    break;
                    
            default:
               depth=0;
               break;
        }
        break;
      case 3:
        v=cmds[cmds_r++];
        switch(cmd){
            case 'w':
               itrxdm.write_reg((uint16_t)addr,(uint8_t)v);
               depth=0;
               break;
            case 'r':
               itrxdm.read_burst((uint16_t)addr,(uint8_t *)mem,v);
               for(k=0;k<v;k++)
                 pc.printf("%c",mem[k]);
               depth=0;
               break;
            case 'T':
                if(subcmd=='T'){
                    pkt_len=v;
                    depth=4;
                }
                else{
                    pkt_type = v&0xf;
                    depth=0;
                    set_phy(pkt_type);
                    start_test_rx(channel);
                }
                break;
            default:
               depth=0;
               break;
        }
        break;
      case 4:
        v=cmds[cmds_r++];
        switch(cmd){
            case 'T':
                pkt_type = v&0xf;
                depth=0;
                start_test_tx(channel,pkt_len,pkt_type);
                break;
            default:
                depth=0;
                break;
        }          
        break;
    }
    cmds_r%=256;
}
