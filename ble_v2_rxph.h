#include <stdint.h>

#ifndef __ICYTRXDM_RXPH_CODE__
#define __ICYTRXDM_RXPH_CODE__

const uint8_t ICYTRXDM_RXPH_CODE_LEN = 115;

const uint8_t ICYTRXDM_RXPH_CODE[115] = {
     0x06, 0x06, 0x1d, 0x28,     0xe7, 0x1f, 0x30, 0x08,     0x0f, 0x1d, 0x31, 0x13,     0x1d, 0x33, 0xe2, 0x31,   // 0x0x 
     0x08, 0x23, 0x49, 0x1d,     0x2a, 0x49, 0x1d, 0x37,     0xe1, 0x1d, 0x16, 0x06,     0x1d, 0x44, 0xff, 0xa4,   // 0x1x 
     0x1d, 0x59, 0x01, 0xa7,     0x01, 0x32, 0x08, 0x29,     0x0c, 0xa7, 0x0b, 0x71,     0x8f, 0x1a, 0x01, 0x08,   // 0x2x 
     0x40, 0x0f, 0x25, 0x02,     0x00, 0x0f, 0x08, 0x40,     0xa7, 0x0c, 0x01, 0x71,     0x9e, 0x0f, 0x1a, 0x0f,   // 0x3x 
     0x13, 0x07, 0x48, 0xa7,     0x01, 0x11, 0x08, 0x43,     0x1d, 0x59, 0x0d, 0x0f,     0xa7, 0x12, 0x08, 0x71,   // 0x4x 
     0x19, 0x06, 0x69, 0xaf,     0x12, 0x08, 0x71, 0x13,     0x07, 0x64, 0x15, 0x1f,     0x30, 0x08, 0x60, 0x51,   // 0x5x 
     0xa7, 0x11, 0x08, 0x60,     0x81, 0x00, 0x41, 0x06,     0x23, 0x13, 0x07, 0x53,     0x1d, 0x42, 0x20, 0x06,   // 0x6x 
     0x53, 0x82, 0x00
};

#endif