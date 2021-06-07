/* -----------------------------------------------------------------------------
   Copyright (C) CSEM SA. All rights reserved.                               --
   Developed at CSEM SA, Neuchatel, Switzerland                              --
   All rights reserved. Reproduction in whole or part is prohibited without  --
   The written permission of the copyright owner.                            --
  -----------------------------------------------------------------------------
    AUTHOR  : Nicola Scolari                                                 */

#include "mbed.h"

bool dump_info = false;
extern Serial pc;
static char debug_line[1024];

void print_info(char *s,...){
    va_list args;
    if(dump_info){
        va_start(args,s);
        vsprintf(debug_line,s,args);
        __disable_irq();
        pc.printf(debug_line);
        __enable_irq();
    }
}
