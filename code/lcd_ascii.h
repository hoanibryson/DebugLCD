
#define ASCII_TABLE_START ' '
#define ASCII_TABLE_SIZE (128 - ASCII_TABLE_START)

#define ASCII_COLUMN_PIXELS 6
#define ASCII_ROW_PIXELS 8

typedef struct AsciiPixels{
  uint8_t pixels[ASCII_COLUMN_PIXELS];
} AsciiPixels_t;

const AsciiPixels_t ascii_table[ASCII_TABLE_START] = {
  {0x00,0x00,0x00,0x00,0x00,0x00}, // SPACE
  {0x00,0x00,0x00,0x00,0x00,0x00}, // !
  {0x00,0x00,0x00,0x00,0x00,0x00}, // "
  {0x00,0x00,0x00,0x00,0x00,0x00}, // #
  {0x00,0x00,0x00,0x00,0x00,0x00}, // $
  {0x00,0x00,0x00,0x00,0x00,0x00}, // %
  {0x00,0x00,0x00,0x00,0x00,0x00}, // &
  {0x00,0x00,0x00,0x00,0x00,0x00}, // '
  {0x00,0x00,0x00,0x00,0x00,0x00}, // (
  {0x00,0x00,0x00,0x00,0x00,0x00}, // )
  {0x00,0x00,0x00,0x00,0x00,0x00}, // *
  {0x00,0x00,0x00,0x00,0x00,0x00}, // +
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ,
  {0x00,0x00,0x00,0x00,0x00,0x00}, // -
  {0x00,0x00,0x00,0x00,0x00,0x00}, // .
  {0x00,0x00,0x00,0x00,0x00,0x00}, // /
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 0
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 1
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 2
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 3
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 4
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 5
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 6
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 7
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 8
  {0x00,0x00,0x00,0x00,0x00,0x00}, // 9
  {0x00,0x00,0x00,0x00,0x00,0x00}, // :
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ;
  {0x00,0x00,0x00,0x00,0x00,0x00}, // <
  {0x00,0x00,0x00,0x00,0x00,0x00}, // =
  {0x00,0x00,0x00,0x00,0x00,0x00}, // >
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ?
  {0x00,0x00,0x00,0x00,0x00,0x00}, // @
  {0xc3,0xa0,0x90,0xa0,0xc3,0x00}, // A
  {0xf3,0x52,0x52,0x52,0xa1,0x00}, // B
  {0xe1,0x12,0x12,0x12,0x21,0x00}, // C
  {0xf3,0x62,0x62,0x10,0x10,0x00}, // D
  {0xf3,0x62,0x62,0x12,0x12,0x00}, // E
  {0xf3,0x60,0x60,0x10,0x10,0x00}, // F
  {0xe2,0x12,0x12,0x92,0xa3,0x00}, // G
  {0xf3,0x40,0x40,0x40,0xf3,0x00}, // H
  {0x12,0x12,0xf3,0x12,0x12,0x00}, // I
  {0x91,0x12,0x12,0xf1,0x10,0x00}, // J
  {0xf3,0x40,0x40,0xa0,0x13,0x00}, // K
  {0xf3,0x02,0x02,0x02,0x02,0x00}, // L
  {0xf3,0x20,0x40,0x20,0xf3,0x00}, // M
  {0xf3,0x20,0x40,0x80,0xf3,0x00}, // N
  {0xe1,0x12,0x12,0x12,0xe1,0x00}, // O 
  {0xf3,0x90,0x90,0x90,0x60,0x00}, // P
  {0xe1,0x12,0x92,0x11,0xe2,0x00}, // Q
  {0xf3,0x50,0x50,0x50,0x23,0x00}, // R
  {0x21,0x52,0x52,0x52,0x91,0x00}, // S
  {0x10,0x10,0xf3,0x10,0x10,0x00}, // T
  {0xf1,0x02,0x02,0x02,0xf1,0x00}, // U
  {0xf0,0x01,0x02,0x01,0xf0,0x00}, // V
  {0xf1,0x02,0x81,0x02,0xf1,0x00}, // W
  {0x13,0xa0,0x40,0xa0,0x13,0x00}, // X
  {0x10,0x20,0xc3,0x20,0x10,0x00}, // Y
  {0x13,0x92,0x52,0x32,0x12,0x00}, // Z
  {0x00,0x00,0x00,0x00,0x00,0x00}, // [
  {0x00,0x00,0x00,0x00,0x00,0x00}, // \ 
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ]
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ^
  {0x00,0x00,0x00,0x00,0x00,0x00}, // _
  {0x00,0x00,0x00,0x00,0x00,0x00}, // `
  {0x41,0xc2,0xc2,0xc2,0x83,0x00}, // a
  {0xf3,0x42,0x42,0x42,0x81,0x00}, // b
  {0x81,0x42,0x42,0x42,0x42,0x00}, // c
  {0x81,0x42,0x42,0x42,0xf3,0x00}, // d
  {0x81,0xc2,0xc2,0xc2,0x82,0x00}, // e
  {0x40,0xe3,0x50,0x50,0x10,0x00}, // f
  {0x00,0x00,0x00,0x00,0x00,0x00}, // g
  {0x00,0x00,0x00,0x00,0x00,0x00}, // h
  {0x00,0x00,0x00,0x00,0x00,0x00}, // i
  {0x00,0x00,0x00,0x00,0x00,0x00}, // j
  {0x00,0x00,0x00,0x00,0x00,0x00}, // k
  {0x00,0x00,0x00,0x00,0x00,0x00}, // l
  {0x00,0x00,0x00,0x00,0x00,0x00}, // m
  {0x00,0x00,0x00,0x00,0x00,0x00}, // n
  {0x00,0x00,0x00,0x00,0x00,0x00}, // o
  {0x00,0x00,0x00,0x00,0x00,0x00}, // p
  {0x00,0x00,0x00,0x00,0x00,0x00}, // q
  {0x00,0x00,0x00,0x00,0x00,0x00}, // r
  {0x00,0x00,0x00,0x00,0x00,0x00}, // s
  {0x00,0x00,0x00,0x00,0x00,0x00}, // t
  {0x00,0x00,0x00,0x00,0x00,0x00}, // u
  {0x00,0x00,0x00,0x00,0x00,0x00}, // v
  {0x00,0x00,0x00,0x00,0x00,0x00}, // w
  {0x00,0x00,0x00,0x00,0x00,0x00}, // x
  {0x00,0x00,0x00,0x00,0x00,0x00}, // y
  {0x00,0x00,0x00,0x00,0x00,0x00}, // z
  {0x00,0x00,0x00,0x00,0x00,0x00}, // {
  {0x00,0x00,0x00,0x00,0x00,0x00}, // |
  {0x00,0x00,0x00,0x00,0x00,0x00}, // }
  {0x00,0x00,0x00,0x00,0x00,0x00}, // ~
  {0x00,0x00,0x00,0x00,0x00,0x00}, // DEL
}
