/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay_basic.h>
#include "mlcd.h"


/**
 * Send a byte to LCD controller.
 * @param data A byte that can be either data or command depending on DC bit.
 */
void mlcd_byte(uint8_t data) {

#ifdef MLCD_CE
    MLCD_PORT &= ~(1 << MLCD_CE); // Set CE low
#ifdef MLCD_DELAY_LOOPS
    _delay_loop_1(MLCD_DELAY_LOOPS);
#endif
#endif

    for (uint8_t i = 0; i < 8; ++i) {
        MLCD_PORT &= ~(1 << MLCD_CLK); // Set CLK low
        // Send the most significant bit to DIN
        if (data & 0x80) {
            MLCD_PORT |= (1 << MLCD_DIN); // Send 1
        } else {
            MLCD_PORT &= ~(1 << MLCD_DIN); // Send 0
        }
#ifdef MLCD_DELAY_LOOPS
        _delay_loop_1(MLCD_DELAY_LOOPS); // Delay after every bit
#endif
        data <<= 1;
        MLCD_PORT |= (1 << MLCD_CLK); // Set CLK high
    }

#ifdef MLCD_CE
    MLCD_PORT |= (1 << MLCD_CE); // Set CE high
#ifdef MLCD_DELAY_LOOPS
    _delay_loop_1(MLCD_DELAY_LOOPS);
#endif
#endif

}


/**
 * Send a data byte to LCD controller.
 * @param data A data byte to be sent.
 */
void mlcd_data(uint8_t data) {
    MLCD_PORT |= (1 << MLCD_DC); // DC bit on
    mlcd_byte(data);
}


/**
 * Send a command byte to LCD controller.
 * @param data A command byte to be sent.
 */
void mlcd_cmd(uint8_t data) {
    MLCD_PORT &= ~(1 << MLCD_DC); // DC bit off
    mlcd_byte(data);
}


/**
 * Initialization of the LCD.
 * Should be called immediately after power on.
 */
void mlcd_init() {

    // Set port pins to output mode
    MLCD_DDR |= (1 << MLCD_CLK) | (1 << MLCD_DIN) |
                (1 << MLCD_DC) | (1 << MLCD_RST);
#ifdef MLCD_CE
    MLCD_DDR |= (1 << MLCD_CE);
#endif

    // Set the RST bit to low, wait 100 ns, set to high
    MLCD_PORT &= ~((1 << MLCD_DIN) | (1 << MLCD_DC) | (1 << MLCD_RST));
#ifdef MLCD_DELAY_LOOPS
    _delay_loop_1(MLCD_DELAY_LOOPS);
#endif
    MLCD_PORT |= (1 << MLCD_RST);

    // Set extended instruction set on, power down mode off,
    // vertical addressing off
    mlcd_cmd(0x21);

    mlcd_cmd(0x80 + 56); // Set operation voltage to 6.42V
    mlcd_cmd(0x04); // Set temperature coefficient to 0
    mlcd_cmd(0x13); // Set bias system to 1:48
    mlcd_cmd(0x20); // Turn off extended instruction set
    mlcd_cmd(0x0c); // Set normal display mode
}


/**
 * Set Y address of RAM.
 * @param y The number of text line [0..5].
 */
void mlcd_y(uint8_t y) {
    mlcd_cmd(0x40 | y & 0x07);
}


/**
 * Set X address of RAM [0..83].
 * @param x The number of display column [0..83].
 */
void mlcd_x(uint8_t x) {
    mlcd_cmd(0x80 | x);
}


/**
 * Set X, Y RAM position.
 * @param x The number of display column [0..83].
 * @param y The number of text line [0..5].
 */
void mlcd_xy(uint8_t x, uint8_t y) {
    mlcd_cmd(0x40 | y & 0x07);
    mlcd_cmd(0x80 | x);
}


/*
 * Clear the display and set RAM position to the origin.
 */
void mlcd_clear() {
    mlcd_xy(0, 0);
    for (uint8_t j = 0; j < MLCD_LINES; ++j) {
        for (uint8_t i = 0; i < MLCD_COLUMNS; ++i) {
            mlcd_data(0x00);
        }
    }
    mlcd_xy(0, 0);
}


/*
 * Display a character in the current position.
 * @param c The character to be displayed.
 */
void mlcd_char(char c) {
    for (uint8_t i = 0; i < MLCD_FONT_WIDTH; ++i) {
        mlcd_data(mlcd_font(c, i));
    }
}


/*
 * Display a character in the current position with decoration.
 * @param c The character to be displayed.
 * @param decor Text decoration flags
 */
void mlcd_char_decor(char c, uint8_t decor) {
    uint8_t i, d;
    for (i = 0; i < MLCD_FONT_WIDTH; ++i) {
        d = mlcd_font(c, i);
        if (decor & MLCD_DECOR_UNDERLINE) {
            d |= 0x80;
        }
        if (decor & MLCD_DECOR_INVERT) {
            d = ~d;
        }
        mlcd_data(d);
    }
}


/*
 * Display a text string starting from specified screen position
 * (with line wrapping).
 * @param x The X position of the first character [0..83].
 * @param y The Y position of the first character [0..5].
 * @param s The string to be displayed (located in RAM).
 */
void mlcd_str(uint8_t x, uint8_t y, char* s) {
    mlcd_xy(x, y);
    while (*s && y < MLCD_LINES) {
        mlcd_char(*(s++));
        x += MLCD_FONT_WIDTH;
        if (x > MLCD_COLUMNS - MLCD_FONT_WIDTH) {
            x = 0;
            if (++y >= MLCD_LINES) {
                break;
            }
            mlcd_xy(x, y);
        }
    }
}

/*
 * Display a text string starting from specified screen position
 * (with line wrapping). The same as mlcd_str but for program memory strings.
 * @param x The X position of the first character [0..83].
 * @param y The Y position of the first character [0..5].
 * @param s The string to be displayed (located in program memory space).
 */
void mlcd_str_P(uint8_t x, uint8_t y, PGM_P s) {
    char c;
    mlcd_xy(x, y);
    c = pgm_read_byte(s);
    while (c && y < MLCD_LINES) {
        mlcd_char(c);
        x += MLCD_FONT_WIDTH;
        if (x > MLCD_COLUMNS - MLCD_FONT_WIDTH) {
            x = 0;
            if (++y >= MLCD_LINES) {
                break;
            }
            mlcd_xy(x, y);
        }
        c = pgm_read_byte(++s);
    }
}
