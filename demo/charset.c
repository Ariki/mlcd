/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This demo project displays all the characters available.
 * They are shown on two pages displayed in turn.
 * Be sure to define MLCD_FONT_ASCII and MLCD_FONT_CYRILLIC macros
 * in your Makefile.
 */

#include <util/delay.h>
#include "../mlcd.h"

int main(void) {
    mlcd_init();
    while(1) {
      mlcd_clear();
      for (unsigned char c = 0x20; c <= 0x73; ++c) {
          mlcd_char(c);
      }
      _delay_ms(5000);
      mlcd_clear();
      for (unsigned char c = 0x74; c <= 0x7f; ++c) {
          mlcd_char(c);
      }
      mlcd_xy(0, 1);
      for (unsigned char c = 0xc0; 0 != c && c <= 0xff; ++c) {
          mlcd_char(c);
      }
      _delay_ms(5000);
    }
}
