#ifndef ASSETS_H
#define ASSETS_H

// background_bottom.png
// 128x8
PROGMEM const unsigned char background_bottom[] = {
// width, height
8, 8,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 
0x10, 0x0C, 0x02, 0xC2, 0xA6, 0x9E, 0x1C, 0x38, 0x70, 0xE0, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};

PROGMEM const unsigned char background_bottom_mask[] = {
// width, height
128, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

};

PROGMEM const unsigned char background_bottom_plus_mask[] = {
// width, height
128, 8,
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0x20, 0xFF, 
0x10, 0xFF, 0x0C, 0xFF, 0x02, 0xFF, 0xC2, 0xFF, 0xA6, 0xFF, 
0x9E, 0xFF, 0x1C, 0xFF, 0x38, 0xFF, 0x70, 0xFF, 0xE0, 0xFF, 
0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 

};

// background_top.png
// 128x8
PROGMEM const unsigned char background_top[] = {
// width, height
8, 8,
0xC0, 0x40, 0x40, 0xC0, 0x80, 0x80, 0x40, 0x40, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 
0xC0, 0x40, 0x60, 0x80, 0x80, 0xC0, 0x30, 0x08, 0x0C, 0x12, 
0x21, 0x01, 0x02, 0x06, 0x8E, 0xDC, 0xDC, 0xDC, 0x58, 0x58, 
0xD8, 0xB0, 0xB0, 0x68, 0x68, 0xD8, 0x9E, 0xB9, 0x30, 0x30, 
0x38, 0x66, 0x61, 0x40, 0x40, 0xC0, 0xC1, 0xE2, 0xF4, 0xE9, 
0xD3, 0x27, 0xD6, 0x08, 0x04, 0x02, 0x03, 0x03, 0x07, 0x0F, 
0x1F, 0x3E, 0x7C, 0xF8, 0xF0, 0xC0, 0x80, 0x80, 0x40, 0x40, 
0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0xC0, 0x60, 0x20, 0x60, 0x80, 0x80, 0x80, 0xE0, 0x20, 
0x60, 0x20, 0x20, 0x60, 0x60, 0x40, 0xC0, 0x80, 0x80, 0x40, 
0x60, 0x40, 0x80, 0xC0, 0x30, 0x08, 0x0C, 0x12, 0x21, 0x01, 
0x02, 0x06, 0x8E, 0xDC, 0xDC, 0xDC, 0x58, 0x58

};

PROGMEM const unsigned char background_top_mask[] = {
// width, height
128, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

};

PROGMEM const unsigned char background_top_plus_mask[] = {
// width, height
128, 8,
0xC0, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 0xC0, 0xFF, 0x80, 0xFF, 
0x80, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 
0xC0, 0xFF, 0x40, 0xFF, 0x60, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 
0xC0, 0xFF, 0x30, 0xFF, 0x08, 0xFF, 0x0C, 0xFF, 0x12, 0xFF, 
0x21, 0xFF, 0x01, 0xFF, 0x02, 0xFF, 0x06, 0xFF, 0x8E, 0xFF, 
0xDC, 0xFF, 0xDC, 0xFF, 0xDC, 0xFF, 0x58, 0xFF, 0x58, 0xFF, 
0xD8, 0xFF, 0xB0, 0xFF, 0xB0, 0xFF, 0x68, 0xFF, 0x68, 0xFF, 
0xD8, 0xFF, 0x9E, 0xFF, 0xB9, 0xFF, 0x30, 0xFF, 0x30, 0xFF, 
0x38, 0xFF, 0x66, 0xFF, 0x61, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 
0xC0, 0xFF, 0xC1, 0xFF, 0xE2, 0xFF, 0xF4, 0xFF, 0xE9, 0xFF, 
0xD3, 0xFF, 0x27, 0xFF, 0xD6, 0xFF, 0x08, 0xFF, 0x04, 0xFF, 
0x02, 0xFF, 0x03, 0xFF, 0x03, 0xFF, 0x07, 0xFF, 0x0F, 0xFF, 
0x1F, 0xFF, 0x3E, 0xFF, 0x7C, 0xFF, 0xF8, 0xFF, 0xF0, 0xFF, 
0xC0, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 
0x40, 0xFF, 0x40, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 
0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 
0x80, 0xFF, 0xC0, 0xFF, 0x60, 0xFF, 0x20, 0xFF, 0x60, 0xFF, 
0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xE0, 0xFF, 0x20, 0xFF, 
0x60, 0xFF, 0x20, 0xFF, 0x20, 0xFF, 0x60, 0xFF, 0x60, 0xFF, 
0x40, 0xFF, 0xC0, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 
0x60, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0xC0, 0xFF, 0x30, 0xFF, 
0x08, 0xFF, 0x0C, 0xFF, 0x12, 0xFF, 0x21, 0xFF, 0x01, 0xFF, 
0x02, 0xFF, 0x06, 0xFF, 0x8E, 0xFF, 0xDC, 0xFF, 0xDC, 0xFF, 
0xDC, 0xFF, 0x58, 0xFF, 0x58, 0xFF, 

};

// candle.png
// 24x8
PROGMEM const unsigned char candle[] = {
// width, height
8, 8,
0x00, 0x00, 0x60, 0xB8, 0xB1, 0x60, 0x00, 0x00, 0x00, 0x40, 
0xE0, 0xE4, 0xE0, 0xE0, 0x40, 0x00, 0x00, 0x00, 0x70, 0x9D, 
0x9E, 0x70, 0x00, 0x00

};

PROGMEM const unsigned char candle_mask[] = {
// width, height
24, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF

};

PROGMEM const unsigned char candle_plus_mask[] = {
// width, height
24, 8,
0x00, 0xFF, 0x00, 0xFF, 0x60, 0xFF, 0xB8, 0xFF, 0xB1, 0xFF, 
0x60, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x40, 0xFF, 
0xE0, 0xFF, 0xE4, 0xFF, 0xE0, 0xFF, 0xE0, 0xFF, 0x40, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x70, 0xFF, 0x9D, 0xFF, 
0x9E, 0xFF, 0x70, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 

};

// player.png
// 16x256
PROGMEM const unsigned char player[] = {
// width, height
16, 256,
0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xD0, 0xB8, 0x78, 0xD8, 
0xF8, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xC7, 0xEB, 0x6D, 0x31, 0x0D, 0x2C, 0xF0, 0xC6, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xC8, 0xDC, 
0xBC, 0x6C, 0x7C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xC7, 0xEB, 0x2C, 0x81, 0x6D, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x30, 0x30, 0x60, 0x90, 
0x48, 0xDC, 0xBC, 0x6C, 0x7C, 0x88, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x07, 0x08, 0x00, 0x00, 0xC0, 0xE0, 0x2E, 0x0D, 0x05, 
0x29, 0xE0, 0xC3, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0xC4, 0xC8, 0xDC, 0xBC, 0x7C, 0x7C, 0x08, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC5, 0xE3, 0x27, 0x17, 
0x07, 0x17, 0x37, 0xE3, 0xC5, 0x06, 0x04, 0x02, 0x00, 0x00, 
0x00, 0x00, 0x80, 0xD0, 0xE8, 0xDC, 0xBC, 0x6C, 0x7C, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x33, 
0x3B, 0x19, 0x02, 0x1A, 0x09, 0x03, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
0xAC, 0x55, 0xE6, 0xE5, 0x0B, 0x36, 0xD7, 0xC8, 0xE8, 0x60, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 
0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 
0x43, 0x03, 0x86, 0x49, 0xC4, 0xED, 0x1B, 0x16, 0xD7, 0xC8, 
0xE8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x40, 0xE0, 0xE0, 0xE0, 0xE0, 0x40, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x30, 0xA8, 0x5C, 0xBE, 0xBE, 0x3E, 0xBD, 
0xBB, 0x5B, 0xA8, 0x30, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 
0x10, 0xF8, 0xD8, 0x78, 0xB8, 0xD0, 0xA0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xF0, 0x2C, 0x0D, 
0x31, 0x6D, 0xEB, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x08, 0x7C, 0x6C, 0xBC, 0xDC, 0xC8, 0x90, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6D, 
0x81, 0x2C, 0xEB, 0xC7, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x88, 0x7C, 0x6C, 0xBC, 0xDC, 0x48, 
0x90, 0x60, 0x30, 0x30, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC3, 
0xE0, 0x29, 0x05, 0x0D, 0x2E, 0xE0, 0xC0, 0x00, 0x00, 0x08, 
0x07, 0x00, 0x00, 0x00, 0x00, 0x08, 0x7C, 0x7C, 0xBC, 0xDC, 
0xC8, 0xC4, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 
0x06, 0xC5, 0xE3, 0x37, 0x17, 0x07, 0x17, 0x27, 0xE3, 0xC5, 
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x7C, 
0x6C, 0xBC, 0xDC, 0xE8, 0xD0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x09, 0x1A, 0x02, 0x19, 0x3B, 
0x33, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x60, 0xE8, 0xC8, 0xD7, 0x36, 0x0B, 
0xE5, 0xE6, 0x55, 0xAC, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE8, 0xC8, 0xD7, 
0x16, 0x1B, 0xED, 0xC4, 0x49, 0x86, 0x03, 0x43, 0x3E, 0x00, 
0x00, 0x00, 0x00, 0x40, 0xE0, 0xE0, 0xE0, 0xE0, 0x40, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x30, 0xA8, 
0x5B, 0xBB, 0xBD, 0x3E, 0xBE, 0xBE, 0x5C, 0xA8, 0x30, 0x00, 
0x00, 0x00

};

PROGMEM const unsigned char player_mask[] = {
// width, height
16, 256,
0x00, 0x00, 0x00, 0x00, 0xA0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 
0xFC, 0xF8, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 
0xEF, 0xFF, 0xFF, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0xC6, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xF8, 0xFC, 0xFE, 
0xFE, 0xFE, 0xFE, 0x7C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xC7, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 
0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x78, 0xF0, 0xF8, 
0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xC8, 0x80, 0x00, 0x00, 
0x07, 0x0F, 0x1F, 0x08, 0xC0, 0xE1, 0xFF, 0xFF, 0x3F, 0x3F, 
0xFF, 0xFF, 0xE7, 0xC7, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x80, 0xC4, 0xEE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x06, 0xEF, 0xFF, 0xFF, 0xFF, 0x3F, 
0x1F, 0x3F, 0xFF, 0xFF, 0xEF, 0xCF, 0x0E, 0x07, 0x00, 0x00, 
0x00, 0x80, 0xD0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0xFF, 0x7F, 
0x7F, 0x3F, 0x1F, 0x3F, 0x1F, 0x0F, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 
0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xBC, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 
0x60, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x80, 0xC0, 0xE0, 
0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x3E, 0x7F, 
0xFF, 0xC7, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFC, 0xF8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
0x70, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0x40, 0x00, 0x00, 
0x00, 0x00, 0x30, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xF8, 0x70, 0x38, 0x00, 0x00, 0x00, 0x10, 
0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xA0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xFF, 0xFF, 0xFF, 0x3F, 
0x7F, 0xFF, 0xFF, 0xEF, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x08, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0x90, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xEF, 0xC7, 0x03, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0xC8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 
0xF8, 0xF0, 0x78, 0xF8, 0xF0, 0xE0, 0x00, 0x03, 0xC7, 0xE7, 
0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xE1, 0xC0, 0x08, 0x1F, 
0x0F, 0x07, 0x00, 0x00, 0x08, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 
0xFC, 0xEE, 0xC4, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0E, 
0xCF, 0xEF, 0xFF, 0xFF, 0x3F, 0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 
0xEF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xFC, 0xFE, 
0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xD0, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x1F, 0x3F, 0x7F, 
0x7F, 0xFF, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x60, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xBC, 0x18, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 
0x80, 0x80, 0x00, 0x00, 0x00, 0x60, 0xF8, 0xFC, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xC7, 0xFF, 0x7F, 0x3E, 
0x00, 0x00, 0x40, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0x70, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x70, 0xF8, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0x30, 
0x00, 0x00

};

PROGMEM const unsigned char player_plus_mask[] = {
// width, height
16, 16,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 
0xA0, 0xF0, 0xD0, 0xF8, 0xB8, 0xFC, 0x78, 0xFC, 0xD8, 0xFC, 
0xF8, 0xFC, 0x10, 0xF8, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 
0xC7, 0xEF, 0xEB, 0xFF, 0x6D, 0xFF, 0x31, 0x7F, 0x0D, 0x3F, 
0x2C, 0xFF, 0xF0, 0xFF, 0xC6, 0xFF, 0x00, 0xC6, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x90, 0x90, 0xF8, 0xC8, 0xFC, 0xDC, 0xFE, 
0xBC, 0xFE, 0x6C, 0xFE, 0x7C, 0xFE, 0x08, 0x7C, 0x00, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0xC7, 0xC7, 0xEF, 
0xEB, 0xFF, 0x2C, 0xFF, 0x81, 0xFF, 0x6D, 0xFF, 0x00, 0x6F, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
0xE0, 0xF0, 0x30, 0xF8, 0x30, 0x78, 0x60, 0xF0, 0x90, 0xF8, 
0x48, 0xFC, 0xDC, 0xFE, 0xBC, 0xFE, 0x6C, 0xFE, 0x7C, 0xFE, 
0x88, 0xFC, 0x80, 0xC8, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x07, 0x07, 0x0F, 0x08, 0x1F, 0x00, 0x08, 0x00, 0xC0, 
0xC0, 0xE1, 0xE0, 0xFF, 0x2E, 0xFF, 0x0D, 0x3F, 0x05, 0x3F, 
0x29, 0xFF, 0xE0, 0xFF, 0xC3, 0xE7, 0x03, 0xC7, 0x00, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x80, 0xC4, 0xC4, 0xEE, 0xC8, 0xFC, 0xDC, 0xFE, 
0xBC, 0xFE, 0x7C, 0xFE, 0x7C, 0xFE, 0x08, 0xFC, 0x00, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
0x06, 0xEF, 0xC5, 0xFF, 0xE3, 0xFF, 0x27, 0xFF, 0x17, 0x3F, 
0x07, 0x1F, 0x17, 0x3F, 0x37, 0xFF, 0xE3, 0xFF, 0xC5, 0xEF, 
0x06, 0xCF, 0x04, 0x0E, 0x02, 0x07, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xD0, 0xD0, 0xF8, 0xE8, 0xFC, 
0xDC, 0xFE, 0xBC, 0xFE, 0x6C, 0xFE, 0x7C, 0xFE, 0x08, 0xFC, 
0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x65, 0xFF, 0x33, 0x7F, 
0x3B, 0x7F, 0x19, 0x3F, 0x02, 0x1F, 0x1A, 0x3F, 0x09, 0x1F, 
0x03, 0x0F, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 
0xC0, 0xE0, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0xBC, 
0xAC, 0xFF, 0x55, 0xFF, 0xE6, 0xFF, 0xE5, 0xFF, 0x0B, 0xFF, 
0x36, 0xFF, 0xD7, 0xFF, 0xC8, 0xFF, 0xE8, 0xFC, 0x60, 0xF8, 
0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 
0xC0, 0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 0x80, 0xC0, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x7F, 
0x43, 0xFF, 0x03, 0xC7, 0x86, 0xCF, 0x49, 0xFF, 0xC4, 0xFF, 
0xED, 0xFF, 0x1B, 0xFF, 0x16, 0xFF, 0xD7, 0xFF, 0xC8, 0xFF, 
0xE8, 0xFC, 0x60, 0xF8, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
0x20, 0x70, 0x40, 0xE0, 0xE0, 0xF0, 0xE0, 0xF0, 0xE0, 0xF0, 
0xE0, 0xF0, 0x40, 0xE0, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xF8, 0xA8, 0xFC, 
0x5C, 0xFF, 0xBE, 0xFF, 0xBE, 0xFF, 0x3E, 0xFF, 0xBD, 0xFF, 
0xBB, 0xFF, 0x5B, 0xFF, 0xA8, 0xFF, 0x30, 0xF8, 0x20, 0x70, 
0x10, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
0x10, 0xF8, 0xF8, 0xFC, 0xD8, 0xFC, 0x78, 0xFC, 0xB8, 0xFC, 
0xD0, 0xF8, 0xA0, 0xF0, 0x00, 0xA0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xC6, 0xC6, 0xFF, 0xF0, 0xFF, 0x2C, 0xFF, 0x0D, 0x3F, 
0x31, 0x7F, 0x6D, 0xFF, 0xEB, 0xFF, 0xC7, 0xEF, 0x00, 0xC7, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x08, 0x08, 0x7C, 0x7C, 0xFE, 0x6C, 0xFE, 
0xBC, 0xFE, 0xDC, 0xFE, 0xC8, 0xFC, 0x90, 0xF8, 0x00, 0x90, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x6D, 0xFF, 
0x81, 0xFF, 0x2C, 0xFF, 0xEB, 0xFF, 0xC7, 0xEF, 0x03, 0xC7, 
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC8, 0x88, 0xFC, 
0x7C, 0xFE, 0x6C, 0xFE, 0xBC, 0xFE, 0xDC, 0xFE, 0x48, 0xFC, 
0x90, 0xF8, 0x60, 0xF0, 0x30, 0x78, 0x30, 0xF8, 0xE0, 0xF0, 
0x00, 0xE0, 0x00, 0x00, 0x00, 0x03, 0x03, 0xC7, 0xC3, 0xE7, 
0xE0, 0xFF, 0x29, 0xFF, 0x05, 0x3F, 0x0D, 0x3F, 0x2E, 0xFF, 
0xE0, 0xFF, 0xC0, 0xE1, 0x00, 0xC0, 0x00, 0x08, 0x08, 0x1F, 
0x07, 0x0F, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
0x08, 0xFC, 0x7C, 0xFE, 0x7C, 0xFE, 0xBC, 0xFE, 0xDC, 0xFE, 
0xC8, 0xFC, 0xC4, 0xEE, 0x80, 0xC4, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x04, 0x0E, 
0x06, 0xCF, 0xC5, 0xEF, 0xE3, 0xFF, 0x37, 0xFF, 0x17, 0x3F, 
0x07, 0x1F, 0x17, 0x3F, 0x27, 0xFF, 0xE3, 0xFF, 0xC5, 0xFF, 
0x06, 0xEF, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0xFC, 0x7C, 0xFE, 
0x6C, 0xFE, 0xBC, 0xFE, 0xDC, 0xFE, 0xE8, 0xFC, 0xD0, 0xF8, 
0x80, 0xD0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x0F, 
0x09, 0x1F, 0x1A, 0x3F, 0x02, 0x1F, 0x19, 0x3F, 0x3B, 0x7F, 
0x33, 0x7F, 0x65, 0xFF, 0x00, 0x65, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x80, 0xC0, 0xC0, 0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 
0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xF8, 
0xE8, 0xFC, 0xC8, 0xFF, 0xD7, 0xFF, 0x36, 0xFF, 0x0B, 0xFF, 
0xE5, 0xFF, 0xE6, 0xFF, 0x55, 0xFF, 0xAC, 0xFF, 0x18, 0xBC, 
0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xC0, 0xE0, 
0xC0, 0xE0, 0xC0, 0xE0, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x60, 0x60, 0xF8, 0xE8, 0xFC, 0xC8, 0xFF, 0xD7, 0xFF, 
0x16, 0xFF, 0x1B, 0xFF, 0xED, 0xFF, 0xC4, 0xFF, 0x49, 0xFF, 
0x86, 0xCF, 0x03, 0xC7, 0x43, 0xFF, 0x3E, 0x7F, 0x00, 0x3E, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0xE0, 0xE0, 0xF0, 
0xE0, 0xF0, 0xE0, 0xF0, 0xE0, 0xF0, 0x40, 0xE0, 0x20, 0x70, 
0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x10, 0x38, 0x20, 0x70, 0x30, 0xF8, 0xA8, 0xFF, 
0x5B, 0xFF, 0xBB, 0xFF, 0xBD, 0xFF, 0x3E, 0xFF, 0xBE, 0xFF, 
0xBE, 0xFF, 0x5C, 0xFF, 0xA8, 0xFC, 0x30, 0xF8, 0x00, 0x30, 
0x00, 0x00, 0x00, 0x00, 

};

// tileset.png
// 56x8
PROGMEM const unsigned char tileset[] = {
// width, height
8, 8,
0xDD, 0xDD, 0x1C, 0xDD, 0xDD, 0xC1, 0xDD, 0xDD, 0x00, 0x36, 
0x32, 0x0A, 0x60, 0x66, 0x16, 0x00, 0x03, 0x37, 0x3F, 0x06, 
0x63, 0x6F, 0x17, 0x0B, 0xF0, 0x90, 0x90, 0x90, 0x90, 0x90, 
0x90, 0xF0, 0x0F, 0x39, 0x39, 0x09, 0x69, 0x69, 0x19, 0x0F, 
0x7F, 0x41, 0x7D, 0x7D, 0x7D, 0x7D, 0x7F, 0x00, 0x03, 0x01, 
0x00, 0x01, 0x2F, 0x01, 0x0B, 0x01

};

PROGMEM const unsigned char tileset_mask[] = {
// width, height
56, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 
0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

};

PROGMEM const unsigned char tileset_plus_mask[] = {
// width, height
56, 8,
0xDD, 0xFF, 0xDD, 0xFF, 0x1C, 0xFF, 0xDD, 0xFF, 0xDD, 0xFF, 
0xC1, 0xFF, 0xDD, 0xFF, 0xDD, 0xFF, 0x00, 0xFF, 0x36, 0xFF, 
0x32, 0xFF, 0x0A, 0xFF, 0x60, 0xFF, 0x66, 0xFF, 0x16, 0xFF, 
0x00, 0xFF, 0x03, 0xFF, 0x37, 0xFF, 0x3F, 0xFF, 0x06, 0xFF, 
0x63, 0xFF, 0x6F, 0xFF, 0x17, 0xFF, 0x0B, 0xFF, 0xF0, 0xF0, 
0x90, 0xF0, 0x90, 0xF0, 0x90, 0xF0, 0x90, 0xF0, 0x90, 0xF0, 
0x90, 0xF0, 0xF0, 0xF0, 0x0F, 0xFF, 0x39, 0xFF, 0x39, 0xFF, 
0x09, 0xFF, 0x69, 0xFF, 0x69, 0xFF, 0x19, 0xFF, 0x0F, 0xFF, 
0x7F, 0xFF, 0x41, 0xFF, 0x7D, 0xFF, 0x7D, 0xFF, 0x7D, 0xFF, 
0x7D, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0x03, 0xFF, 0x01, 0xFF, 
0x00, 0xFF, 0x01, 0xFF, 0x2F, 0xFF, 0x01, 0xFF, 0x0B, 0xFF, 
0x01, 0xFF, 

};

#endif