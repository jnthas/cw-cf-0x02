#include <Arduino.h>
#include <gfxfont.h>

const uint8_t small4pt7bBitmaps[] PROGMEM = {
  0x00, 0xE4, 0xB4, 0x00, 0x57, 0xD5, 0xF5, 0x00, 0x23, 0xE0, 0xE0, 0xF8, 
  0x80, 0xCE, 0x88, 0xB9, 0x80, 0x72, 0x07, 0x23, 0x78, 0x00, 0xC0, 0x6A, 
  0x40, 0x95, 0x80, 0xAA, 0x80, 0x5D, 0x00, 0xC0, 0xE0, 0x80, 0x04, 0x21, 
  0x08, 0x42, 0x00, 0x74, 0x63, 0x17, 0x00, 0x75, 0x40, 0xF0, 0x5D, 0x0F, 
  0x80, 0x74, 0x4D, 0x17, 0x00, 0x8C, 0x7E, 0x10, 0x80, 0xFC, 0x3C, 0x1F, 
  0x00, 0x7C, 0x3D, 0x17, 0x00, 0xF1, 0x24, 0x40, 0x74, 0x5D, 0x17, 0x00, 
  0x74, 0x5E, 0x1F, 0x00, 0x88, 0x8C, 0x00, 0x2A, 0x22, 0x00, 0xF0, 0xF0, 
  0x88, 0xA8, 0x00, 0x74, 0x4C, 0x02, 0x00, 0x74, 0x6F, 0x5B, 0x80, 0x74, 
  0x63, 0xF8, 0x80, 0xF4, 0x7D, 0x1F, 0x00, 0x74, 0x61, 0x17, 0x00, 0xF4, 
  0x63, 0x1F, 0x00, 0xFC, 0x3D, 0x0F, 0x80, 0xFC, 0x3D, 0x08, 0x00, 0x7C, 
  0x2F, 0x17, 0x00, 0x8C, 0x7F, 0x18, 0x80, 0x71, 0x08, 0x47, 0x00, 0x18, 
  0x63, 0x17, 0x00, 0x8C, 0xB9, 0x28, 0x80, 0x84, 0x21, 0x0F, 0x80, 0x8E, 
  0xEB, 0x18, 0x80, 0x8E, 0x6B, 0x38, 0x80, 0x74, 0x63, 0x17, 0x00, 0xF4, 
  0x7D, 0x08, 0x00, 0x74, 0x63, 0x26, 0x80, 0xF4, 0x7D, 0x18, 0x80, 0x7C, 
  0x1C, 0x1F, 0x00, 0xF9, 0x08, 0x42, 0x00, 0x8C, 0x63, 0x17, 0x00, 0x8C, 
  0x62, 0xA2, 0x00, 0x8C, 0x6B, 0xB8, 0x80, 0x8A, 0x88, 0xA8, 0x80, 0x8A, 
  0x88, 0x42, 0x00, 0xF8, 0x88, 0x8F, 0x80, 0xEA, 0xC0, 0x82, 0x08, 0x20, 
  0x80, 0xD5, 0xC0, 0x54, 0x00, 0xF8, 0x00, 0x00, 0x72, 0x38, 0xFF, 0x86, 
  0x10, 0xFA, 0x18, 0xBE, 0x87, 0xE0, 0x74, 0x61, 0x08, 0xB8, 0x00, 0xFA, 
  0x08, 0x61, 0x87, 0xE0, 0xFE, 0x08, 0x3C, 0x83, 0xF0, 0xFE, 0x08, 0x3C, 
  0x82, 0x00, 0x7C, 0x08, 0x2F, 0x85, 0xC0, 0x86, 0x18, 0x7F, 0x86, 0x10, 
  0xFC, 0x82, 0x08, 0x23, 0xF0, 0x1C, 0x10, 0x61, 0x85, 0xC0, 0x86, 0x48, 
  0x38, 0x92, 0x10, 0x82, 0x08, 0x20, 0x83, 0xF0, 0x8E, 0xE3, 0x58, 0xC4, 
  0x8E, 0x63, 0x59, 0xC4, 0x70, 0x08, 0x61, 0x85, 0xC0, 0xFA, 0x18, 0x3E, 
  0x82, 0x00, 0x72, 0x18, 0x60, 0x91, 0xD0, 0xFA, 0x18, 0x3E, 0x86, 0x10, 
  0x7E, 0x00, 0x1C, 0x07, 0xC0, 0xFC, 0x82, 0x08, 0x20, 0x80, 0x86, 0x18, 
  0x61, 0x85, 0xC0, 0x86, 0x18, 0x40, 0x50, 0x80, 0x8C, 0x63, 0x5D, 0xC4, 
  0x85, 0x40, 0x08, 0x52, 0x10, 0x85, 0x40, 0x08, 0x20, 0x80, 0xFC, 0x40, 
  0x08, 0x43, 0xF0, 0x6B, 0x26, 0x00, 0xF8, 0x00, 0xC9, 0xAC, 0x00, 0x00 
};

const GFXglyph small4pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   3,    1,    0 }   // ' '
 ,{     1,   1,   6,   2,    0,   -5 }   // '!'
 ,{     2,   3,   2,   4,    0,   -6 }   // '"'
 ,{     4,   5,   5,   6,    0,   -5 }   // '#'
 ,{     8,   5,   7,   6,    0,   -6 }   // '$'
 ,{    13,   5,   5,   6,    0,   -4 }   // '%'
 ,{    17,   6,   5,   7,    0,   -4 }   // '&'
 ,{    22,   1,   2,   2,    0,   -5 }   // '''
 ,{    23,   2,   5,   3,    0,   -4 }   // '('
 ,{    25,   2,   5,   3,    0,   -4 }   // ')'
 ,{    27,   3,   3,   4,    0,   -4 }   // '*'
 ,{    29,   3,   3,   4,    0,   -3 }   // '+'
 ,{    31,   1,   2,   2,    0,    0 }   // ','
 ,{    32,   3,   1,   4,    0,   -2 }   // '-'
 ,{    33,   1,   1,   2,    0,    0 }   // '.'
 ,{    34,   6,   6,   8,    0,   -5 }   // '/'
 ,{    39,   5,   5,   6,    0,   -4 }   // '0'
 ,{    43,   2,   5,   3,    0,   -4 }   // '1'
 ,{    45,   5,   5,   6,    0,   -4 }   // '2'
 ,{    49,   5,   5,   6,    0,   -4 }   // '3'
 ,{    53,   5,   5,   6,    0,   -4 }   // '4'
 ,{    57,   5,   5,   6,    0,   -4 }   // '5'
 ,{    61,   5,   5,   6,    0,   -4 }   // '6'
 ,{    65,   4,   5,   5,    0,   -4 }   // '7'
 ,{    68,   5,   5,   6,    0,   -4 }   // '8'
 ,{    72,   5,   5,   6,    0,   -4 }   // '9'
 ,{    76,   1,   5,   2,    0,   -4 }   // ':'
 ,{    77,   1,   6,   2,    0,   -4 }   // ';'
 ,{    79,   3,   5,   4,    0,   -4 }   // '<'
 ,{    82,   4,   3,   5,    0,   -3 }   // '='
 ,{    84,   3,   5,   4,    0,   -4 }   // '>'
 ,{    87,   5,   5,   6,    0,   -4 }   // '?'
 ,{    91,   5,   5,   6,    0,   -4 }   // '@'
 ,{    95,   5,   5,   6,    0,   -4 }   // 'A'
 ,{    99,   5,   5,   6,    0,   -4 }   // 'B'
 ,{   103,   5,   5,   6,    0,   -4 }   // 'C'
 ,{   107,   5,   5,   6,    0,   -4 }   // 'D'
 ,{   111,   5,   5,   6,    0,   -4 }   // 'E'
 ,{   115,   5,   5,   6,    0,   -4 }   // 'F'
 ,{   119,   5,   5,   6,    0,   -4 }   // 'G'
 ,{   123,   5,   5,   6,    0,   -4 }   // 'H'
 ,{   127,   5,   5,   4,   -1,   -4 }   // 'I'
 ,{   131,   5,   5,   6,    0,   -4 }   // 'J'
 ,{   135,   5,   5,   6,    0,   -4 }   // 'K'
 ,{   139,   5,   5,   6,    0,   -4 }   // 'L'
 ,{   143,   5,   5,   6,    0,   -4 }   // 'M'
 ,{   147,   5,   5,   6,    0,   -4 }   // 'N'
 ,{   151,   5,   5,   6,    0,   -4 }   // 'O'
 ,{   155,   5,   5,   6,    0,   -4 }   // 'P'
 ,{   159,   5,   5,   6,    0,   -4 }   // 'Q'
 ,{   163,   5,   5,   6,    0,   -4 }   // 'R'
 ,{   167,   5,   5,   6,    0,   -4 }   // 'S'
 ,{   171,   5,   5,   6,    0,   -4 }   // 'T'
 ,{   175,   5,   5,   6,    0,   -4 }   // 'U'
 ,{   179,   5,   5,   6,    0,   -4 }   // 'V'
 ,{   183,   5,   5,   6,    0,   -4 }   // 'W'
 ,{   187,   5,   5,   6,    0,   -4 }   // 'X'
 ,{   191,   5,   5,   6,    0,   -4 }   // 'Y'
 ,{   195,   5,   5,   6,    0,   -4 }   // 'Z'
 ,{   199,   2,   5,   3,    0,   -4 }   // '['
 ,{   201,   5,   5,   7,    0,   -5 }   // '\'
 ,{   205,   2,   5,   3,    0,   -4 }   // ']'
 ,{   207,   3,   2,   5,    1,   -5 }   // '^'
 ,{   209,   5,   1,   6,    0,    0 }   // '_'
 ,{   211,   1,   1,   4,    0,    0 }   // '`'
 ,{   212,   6,   6,   8,    1,   -5 }   // 'a'
 ,{   217,   6,   6,   8,    1,   -5 }   // 'b'
 ,{   222,   5,   6,   8,    1,   -5 }   // 'c'
 ,{   227,   6,   6,   8,    1,   -5 }   // 'd'
 ,{   232,   6,   6,   7,    1,   -5 }   // 'e'
 ,{   237,   6,   6,   7,    1,   -5 }   // 'f'
 ,{   242,   6,   6,   8,    1,   -5 }   // 'g'
 ,{   247,   6,   6,   8,    1,   -5 }   // 'h'
 ,{   252,   6,   6,   8,    1,   -5 }   // 'i'
 ,{   257,   6,   6,   8,    1,   -5 }   // 'j'
 ,{   262,   6,   6,   8,    1,   -5 }   // 'k'
 ,{   267,   6,   6,   7,    1,   -5 }   // 'l'
 ,{   272,   5,   6,   7,    1,   -5 }   // 'm'
 ,{   276,   5,   6,   7,    1,   -5 }   // 'n'
 ,{   280,   6,   6,   8,    1,   -5 }   // 'o'
 ,{   285,   6,   6,   8,    1,   -5 }   // 'p'
 ,{   290,   6,   6,   8,    1,   -5 }   // 'q'
 ,{   295,   6,   6,   8,    1,   -5 }   // 'r'
 ,{   300,   6,   6,   8,    1,   -5 }   // 's'
 ,{   305,   6,   6,   8,    1,   -5 }   // 't'
 ,{   310,   6,   6,   8,    1,   -5 }   // 'u'
 ,{   315,   6,   6,   8,    1,   -5 }   // 'v'
 ,{   320,   5,   6,   7,    1,   -5 }   // 'w'
 ,{   324,   6,   6,   8,    1,   -5 }   // 'x'
 ,{   329,   6,   6,   8,    1,   -5 }   // 'y'
 ,{   334,   6,   6,   8,    1,   -5 }   // 'z'
 ,{   339,   3,   5,   5,    1,   -4 }   // '{'
 ,{   342,   1,   5,   3,    1,   -4 }   // '|'
 ,{   344,   3,   5,   5,    1,   -4 }   // '}'
 ,{   347,   1,   1,   4,    0,    0 }   // '~'
};

const GFXfont small4pt7b PROGMEM = {
  (uint8_t  *)small4pt7bBitmaps,   
  (GFXglyph *)small4pt7bGlyphs, 0x20, 0x7e,    10 };

// Approx. 1056 bytes
