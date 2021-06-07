/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "mbed.h"
#include "config.h"
#include "hci.h"
#include "icytrxdm.h"
#include "rx_stats.h"
#include "tools.h"

int hciw=0;
int hcir=0;
uint8_t hci[16];
int ahciw=0;
int ahcir=0;
uint8_t ahci[16];
uint8_t cte_len=0;
uint8_t df_pkt=0;
uint8_t cte_type=0;
uint8_t cte_slots=0;
uint8_t ant_sw=0;
uint8_t df_ready=0;
uint8_t df_processing=0;
uint8_t iq_invert = 0;
uint8_t is_rx = 0;
uint8_t is_tx = 0;
static int state = 0;
static int opcode = 0;
static int cnt = 0;
static uint8_t chn;
static int cnt_param = 0;
static uint8_t params[64];
//static uint8_t ant[64];
//static uint8_t iq_smp[84*2];
//static int is_df=0;
//static int send_df=0;

static int len = 0;

extern int rx_pkt;
extern int rx_tst;
extern icytrxdm itrxdm;
extern Serial cmw;
extern DigitalOut myled1;
extern DigitalOut myled2;
extern DigitalOut myled3;
extern DigitalOut myled4;

static void print_hci_debug(char *s){
#ifdef DEBUG_HCI
    print_info(s);
#endif
}

void hci_irq(){
    hci_add_val((uint8_t)cmw.getc());
}

void set_leds(int a){
    myled1=myled2=myled3=myled4=0;
    if(a&1)
      myled1=1;
    if(a&2)
      myled2=1;
    if(a&4)
      myled3=1;
    if(a&8)
      myled4=1;
}

static void start_ans(int ll){
    cmw.putc(0x04);
    cmw.putc(0x0e);
    cmw.putc(ll);
}    

static void std_ans(int ll){
    start_ans(ll);
    cmw.putc(0x01);
    cmw.putc(opcode&0xff);
    cmw.putc(opcode>>8);
    cmw.putc(0x00);
}    

void set_phy(int phy){
    switch(phy){
        case 1:
            //itrxdm.write_reg(0x60,0x0); //decimator
            //itrxdm.write_reg(0x2e,0xe0);
            //itrxdm.write_reg(0x85,0);
            itrxdm.write_reg(itrxdm.REG_SEQ_CONF,0);
            break;
        case 2:
            //itrxdm.write_reg(0x60,0x1); //decimator
            //itrxdm.write_reg(0x2e,0xf0);
            //itrxdm.write_reg(0x85,1);
            itrxdm.write_reg(itrxdm.REG_SEQ_CONF,1);
            break;
        case 3:
        case 4:
            itrxdm.write_reg(itrxdm.REG_SEQ_CONF,2);
            break;
        default:
            //itrxdm.write_reg(0x60,0x0); //decimator
            //itrxdm.write_reg(0x2e,0xe0);
            //itrxdm.write_reg(0x85,0);
            itrxdm.write_reg(itrxdm.REG_SEQ_CONF,0);
            break;
    }
}

void start_test_tx(int chn,int pkt_len,int pkt_type){
    int l;
    int dist;
    l=pkt_len*8+8+32+16+24;
    dist=(l+249+624)/625;
    itrxdm.write_reg(itrxdm.REG_PT_DELTA_TS_1,(dist*625)&0xff);
    itrxdm.write_reg(itrxdm.REG_PT_DELTA_TS_1+1,(dist*625)>>8);
    itrxdm.write_reg(itrxdm.REG_BLE_DTM,0x80+(pkt_type&0xf));
    itrxdm.write_reg(itrxdm.REG_BLE_DTM+1,pkt_len);
    itrxdm.write_reg(itrxdm.REG_CHANNEL,chn);
    //itrxdm.write_reg(itrxdm.REG_PT_CMD,0x0);
    itrxdm.write_reg(itrxdm.REG_PT_CMD,0x12);
    itrxdm.write_reg(itrxdm.REG_COMMANDS,0x10);
    is_tx = 1;
}

void stop_test_tx(){
    itrxdm.write_reg(itrxdm.REG_PT_CMD,0x3);
    is_tx = 0;
}

void start_test_rx(int chn){
    rx_pkt = 0;
    rx_tst = 1;
    rx_stats_reset();
    itrxdm.write_reg(itrxdm.REG_CHANNEL,chn);
    itrxdm.write_reg(itrxdm.REG_COMMANDS,0x12);
    is_rx = 1;
}

void stop_test_rx(){
    rx_dump_stats(rx_pkt);
    rx_tst = 0;
    itrxdm.write_reg(itrxdm.REG_COMMANDS,0x13);
    is_rx = 0;
}

void check_cmd(){
    int phy,pkt_type,pkt_len;
    char hcidbg[1024];

    sprintf(hcidbg,"OGF 0x%x Opcode 0x%x with %d params\n",opcode>>10,opcode&0x3ff,cnt_param);
    print_hci_debug(hcidbg);
    switch(opcode&0x3ff){
        case 0x1:
          std_ans(4);
          break;
        case 0x3:
          print_hci_debug(hcidbg);
          itrxdm.soft_rst();
          phy=1;
          set_phy(phy);
          std_ans(4);
          break;
/*      case 0x50:
          // Tx test v3 (currently unsupported)
          df = df_pkt = 1;
          cte_len = params[4];
          cte_type = params[5];
          ant_sw = params[6];
          for(k=0;k<ant_sw;k++)
             ant[k+1]=params[k+7];
          for(k=0;k<(ant_sw+1);k=k+2)
              itrxdm.write_reg((itrxdm.REG_ANT_LUT)+(k>>1),ant[k]+(ant[k+1]<<4));
          if(itrxdm.has_df==1){ 
            itrxdm.write_reg(itrxdm.REG_CTE_OPTS+1,2);
            itrxdm.write_reg(itrxdm.REG_CTE_OPTS,(cte_type<<6)+cte_len);
            itrxdm.write_reg(itrxdm.REG_ANTENNA_CONF,ant_sw+0x80);
          }*/
          // no break since Tx test v3 is a superset of Tx test v2
        case 0x34:
          // Tx test v2
          phy=params[3];
          set_phy(phy);
          // no break since Tx test v2 is a superset of Tx test v1
        case 0x1e:
          //Tx Test v1
          chn=params[0];
          pkt_len=params[1];
          pkt_type=params[2];
          start_test_tx(chn,pkt_len,pkt_type);
          std_ans(4);
          break;
/*        case 0x4f:
          //Rx test v3 /currently unsupported)
          cte_len=params[3];
          pc.printf("CTE len=%d\n",cte_len);
          cte_type=params[4];
          cte_slots=params[5];
          ant_sw=params[6];
          pc.printf("Antenna sw patt len=%d\nAntenna pattern=",ant_sw);
          ant[0]=0;
          for(k=0;k<ant_sw;k++){
              uint8_t ant_id;
              ant_id=params[7+k];
              ant[k+1]=ant_id;
              if(k!=0)
                 pc.printf(",");
              pc.printf("%d",ant_id);
          }
          pc.printf("\n");
          for(k=0;k<(ant_sw+1);k=k+2)
              itrxdm.write_reg((itrxdm.REG_ANT_LUT)+(k>>1),ant[k]+(ant[k+1]<<4));
          df = df_pkt = is_df = 1;
          if(itrxdm.has_df==1){
            uint8_t tmp;
            itrxdm.write_reg(itrxdm.REG_IQFIFO_STATUS,1);
            tmp=itrxdm.read_reg(itrxdm.REG_CTE_OPTS+1);
            tmp&=0xf8;
            tmp+=1;
            if(cte_type==0x00)
              if(cte_slots==0x02)
                tmp+=4;
            itrxdm.write_reg(itrxdm.REG_CTE_OPTS+1,tmp);
            itrxdm.write_reg(itrxdm.REG_ANTENNA_CONF,ant_sw+0x80);
            //itrxdm.write_reg(0xed,0);
          }*/
          // no break since Tx test v2 is a superset of Tx test v1
        case 0x33:
          //Rx test v2
          phy=params[1];
          set_phy(phy);
          // no break since Tx test v2 is a superset of Tx test v1
        case 0x1d:
          //Rx test v1
          chn=params[0];
          start_test_rx(chn);
          std_ans(4);
          break;
        case 0x1f:
          wait(0.01);
          std_ans(6);
          if(is_tx==1){
              print_info("Stop Test Tx\n");
              stop_test_tx();
              cmw.putc(0x00);
              cmw.putc(0x00);
          }
          if(is_rx==1){
              cmw.putc(rx_pkt&0xff);
              cmw.putc(rx_pkt>>8);
              print_info("Stop Test Rx. Received %d packets.\n",rx_pkt);
              stop_test_rx();
          }
          break;
        default:
          print_info("Unknown opcode 0x%x\n",opcode&0x3ff);
          //print_hci_debug(hcidbg);
          break;
    }
}

void hci_add_val(uint8_t v){
    hci[hciw++]=v;
    hciw%=16;
}

void parsehci(){
    uint8_t v;
    char hcidbg[1024];
    sprintf(hcidbg,"HCI parse: hcir = %d, hciw = %d\n",hcir,hciw);
    print_hci_debug(hcidbg);
    v=hci[hcir++];
    hcir%=16;
    switch(state){
        case 0:
          //set_leds(5);
          if(v==1){
            state = 1;
            cnt=0;
            cnt_param=0;
          }
          else{
            sprintf(hcidbg,"HCI: received 0x%x. Not a command\n",v);
            print_hci_debug(hcidbg);
          }
        break;
        case 1:
          //set_leds(9);
          if(cnt==0)
            opcode=v;
          if(cnt==1){
            opcode+=v<<8;
          }
          if(cnt==2)
            len=v;
          if(cnt>2){
            params[cnt_param++]=v;
          }
          if(cnt>1){
            if(cnt_param==len){
              check_cmd();
              state = 0;
            }
          }
          cnt++;
        break;
    }
    
}  


/*void hci_df_processing(){
    uint8_t iq_smps;
    uint8_t k;
    static uint16_t i=0;
    if(send_df==0){
        //clear the IQFIFO
        itrxdm.write_reg(itrxdm.REG_IQFIFO_STATUS,1);
        return;
    }
    df_processing=1;
    df_ready=0;
    iq_smps = itrxdm.read_reg(itrxdm.REG_IQFIFO_COUNT);
    iq_smps = iq_smps>>1;
    itrxdm.read_burst(itrxdm.REG_IQFIFO,iq_smp,iq_smps<<1);
    cmw.putc(0x4);  //event
    cmw.putc(0x3e); //LE
    cmw.putc(13+iq_smps*2);
    cmw.putc(0x15); //Connectionless report IQ
    cmw.putc(0xff); // sync handle
    cmw.putc(0x0f);
    cmw.putc(chn);  //channel
    cmw.putc(0x70); //RSSI
    cmw.putc(0xfe);
    cmw.putc(0x0);  //RSSI Antenna ID
    cmw.putc(cte_type);
    cmw.putc(2);   // slot duration
    cmw.putc(0x00);  // CRC correct
    cmw.putc(i&0xff);  // paEventCoutner
    cmw.putc(i>>8); 
    i+=1;
    //iq_smps=iq_smps>>1;
    //iq_smps=45;
    cmw.putc(iq_smps);
    for(k=0;k<(iq_smps<<1);k++) {
      if(iq_smp[k]==0x80)
        iq_smp[k]=0x81;
      //if((k%2)==0)
      //  iq_smp[k]=0;
      //else
      //  iq_smp[k]=127;
      //iq_smp[k]=iq_smp[k]>>1;
    }
    //if(iq_invert==0){
    //  for(k=0;k<iq_smps;k++) 
    //     cmw.putc(iq_smp[k*2]);
    //  for(k=0;k<iq_smps;k++) 
    //     cmw.putc(iq_smp[k*2+1]);
    //}
    //else{
      for(k=0;k<(iq_smps<<1);k++) 
        cmw.putc(iq_smp[k]);
    //}
    wait(0.01);
    df_processing=0;
}*/
