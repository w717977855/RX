#include <stdint.h>

#ifndef __ICYTRXDM_SEQ_CODE__
#define __ICYTRXDM_SEQ_CODE__

// This is taken from nsi_tests, the load_conf that actually seems to work
// This original "ble.bin" is from february and different to any configuration on gitlab
// To be disasembled/compared to the rest

#define ICYTRXDM_SEQ_0_ADDR         1
#define ICYTRXDM_SEQ_1_ADDR         39
#define ICYTRXDM_SEQ_2_ADDR         51
#define ICYTRXDM_SEQ_3_ADDR         80
#define ICYTRXDM_SEQ_4_ADDR         0
#define ICYTRXDM_SEQ_5_ADDR         00

const uint8_t ICYTRXDM_SEQ_ADDR[] = { 
    ICYTRXDM_SEQ_0_ADDR, 
    ICYTRXDM_SEQ_1_ADDR, 
    ICYTRXDM_SEQ_2_ADDR, 
    ICYTRXDM_SEQ_3_ADDR, 
    ICYTRXDM_SEQ_4_ADDR, 
    ICYTRXDM_SEQ_5_ADDR };

const uint8_t ICYTRXDM_SEQ_CODE[] = {0, 112, 7, 2, 112, 171, 0, 112, 111, 15, 49, 10, 16, 48, 12, 32, 110, 49, 1, 114, 13, 64, 138, 82, 0, 3, 11, 98, 112, 8, 2, 0, 112, 171, 1, 112, 111, 0, 13, 112, 7, 1, 11, 110, 98, 0, 3, 112, 8, 1, 0, 49, 10, 57, 48, 12, 117, 94, 49, 1, 81, 225, 15, 11, 98, 82, 0, 12, 81, 218, 19, 138, 97, 225, 8, 138, 114, 13, 66, 0, 11, 110, 98, 0, 12, 97, 218, 19, 110, 9, 1, 97, 225, 15, 97, 222, 89, 0, 94, 75, 127, 138, 94, 75, 128, 130, 94, 48, 16, 13, 110, 48, 16, 110, 75, 255, 13, 94, 9, 1, 81, 222, 25, 13};
const uint8_t ICYTRXDM_SEQ_CODE_LEN = sizeof(ICYTRXDM_SEQ_CODE);


#endif
