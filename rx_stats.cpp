/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include <stdint.h>
#include <math.h>
#include "icytrxdm.h"
#include "mbed.h"
#include "tools.h"

extern icytrxdm itrxdm;

static double rssi;
static double rssi2;
static double fei;
static double fei2;
static double agc;
static double agc2;

uint8_t dump = 0;
double rssi_max;
double rssi_min;
double rssi_avg;
double rssi_std;
double fei_max;
double fei_min;
double fei_avg;
double fei_std;
double agc_max;
double agc_min;
double agc_avg;
double agc_std;
double lq_max;
double lq_min;
double lq_avg;
double lq_std;
double lna_att_avg;
double lna_gain_avg;
double bqf1_gain_avg;
double bqf2_gain_avg;
uint8_t lna_att_inst;
uint8_t lna_gain_inst;
uint8_t bqf1_gain_inst;
uint8_t bqf2_gain_inst;

uint8_t abs_fei = 0;

void rx_stats_reset(){
    rssi=rssi2=0;
    fei=fei2=0;
    agc=agc2=0;
    //lq=lq2=0;
    rssi_max=0.0;
    rssi_min=2048.0;
    fei_min=32000.0;
    fei_max=-32000.0;
    agc_max=0;
    agc_min=11;
    fei_avg = 0;
    rssi_avg = 0;
    agc_avg = 0;
    fei_std=0;
    rssi_std=0;
    agc_std=0;
    lna_gain_avg = 0;
    bqf1_gain_avg = 0;
    bqf2_gain_avg = 0;
    //lq_max=0.0;
    //lq_min=255.0;
}

void rx_stats(){
    double new_rssi,new_fei,new_agc;
    new_rssi = (double)itrxdm.get_rssi();
    new_fei  = (double)itrxdm.get_fei();
    new_agc  = (double)itrxdm.get_agc();

    if(abs_fei==1)
        new_fei*=24e3/(double)(1<<19);
    fei   += new_fei;
    fei2  += new_fei*new_fei;
    rssi  += new_rssi;
    rssi2 += new_rssi*new_rssi;
    agc   += new_agc;
    agc2  += new_agc*new_agc;
    bqf1_gain_avg += (double)bqf1_gain_inst;
    bqf2_gain_avg += (double)bqf2_gain_inst;
    lna_gain_avg  += (double)lna_gain_inst;
    lna_att_avg   += (double)lna_att_inst;

    if(new_fei<fei_min)
        fei_min = new_fei;
    if(new_fei>fei_max)
        fei_max = new_fei;
    if(new_rssi<rssi_min)
        rssi_min = new_rssi;
    if(new_rssi>rssi_max)
        rssi_max = new_rssi;
    if(new_agc>agc_max)
        agc_max = new_agc;
    if(new_agc<agc_min)
        agc_min = new_agc;
}

void rx_dump_stats(int pkts){
    double pkts_f;
    if(pkts!=0) {
        pkts_f = (double)pkts;
        fei_avg = fei/pkts_f;
        if(pkts>1)
            fei_std = sqrt((fei2-fei*fei/pkts_f)/(pkts_f-1.0));
        else
            fei_std = INFINITY;
        rssi_avg = rssi/pkts_f;
        if(pkts>1)
            rssi_std = sqrt((rssi2-rssi*rssi/pkts_f)/(pkts_f-1.0));
        else
            rssi_std = INFINITY;
        agc_avg = agc/pkts_f;
        if(pkts>1)
            agc_std = sqrt((agc2-agc*agc/pkts_f)/(pkts_f-1.0));
        else
            agc_std = INFINITY;
        lna_att_avg   /= pkts_f;
        lna_gain_avg  /= pkts_f;
        bqf1_gain_avg /= pkts_f;
        bqf2_gain_avg /= pkts_f;

        if(dump!=0) {
            print_info("Stats over %d packets.\n",pkts);
            print_info("FEI");
            if(abs_fei==1)
                print_info(" abs (kHz)");
            print_info(": avg %f, std %f, min %f, max %f\n",fei_avg,fei_std,fei_min,fei_max);
            print_info("RSSI: avg %f, std %f, min %f, max %f\n\n",rssi_avg,rssi_std,rssi_min,rssi_max);
            print_info("AGC: avg %f, std %f, min %f, max %f\n\n",agc_avg,agc_std,agc_min,agc_max);

        }
    } else {
        if(dump!=0)
            print_info("No packets received. Impossble to do some statistics!\n\n");
    }
}
