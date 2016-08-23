/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * Yet another PCD8544 display controlling library for AVR microcontrollers
 */

#ifndef _MLCD_H_
#define _MLCD_H_

#include <avr/io.h>
#include <avr/pgmspace.h>

#include "mlcd_config.h"
#include "mlcd_font.h"

#define MLCD_COLUMNS 84
#define MLCD_LINES 6

#define MLCD_DECOR_NONE 0
#define MLCD_DECOR_INVERT 1
#define MLCD_DECOR_UNDERLINE 2

void mlcd_byte(uint8_t data);

void mlcd_cmd(uint8_t data);

void mlcd_data(uint8_t data);

void mlcd_init();

void mlcd_x(uint8_t x);

void mlcd_y(uint8_t y);

void mlcd_xy(uint8_t x, uint8_t y);

void mlcd_clear();

void mlcd_char(char c);

void mlcd_char_decor(char c, uint8_t decor);

void mlcd_str(uint8_t x, uint8_t y, char* s);

void mlcd_str_P(uint8_t x, uint8_t y, PGM_P s);

#endif
