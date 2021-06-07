#ifndef __ICYTRXDM_FIRMWARE__
#define __ICYTRXDM_FIRMWARE__

#define ICYTRXDM_MAIN_CONFIG_BASEADDR   0x000
#define ICYTRXDM_SEQ_CODE_BASEADDR      0xad0
#define ICYTRXDM_RXPH_CODE_BASEADDR     0xbd0
#define ICYTRXDM_TXPH_CODE_BASEADDR     0xb50
#define ICYTRXDM_AGC_CODE_BASEADDR      0xc50
#define ICYTRXDM_ADPLL_CONFIG_BASEADDR  0xe00

#include "agc.h"
#include "ble_v2_adpll.h"
#include "ble_v2_main.h"
#include "ble_v2_rxph.h"
#include "ble_vx_seq.h" // Note it's vx instead of v2!
#include "ble_v2_txph.h"

#endif