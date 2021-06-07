/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#ifndef HCI
#define HCI
void hci_irq();
void parsehci();
void hci_add_val(uint8_t v);
void set_phy(int);
void start_test_tx(int chn,int pkt_len,int pkt_type);
void start_test_rx(int chn);
void stop_test_tx();
void stop_test_rx();
//void hci_df_processing();
#endif