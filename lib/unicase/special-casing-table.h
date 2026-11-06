/* ANSI-C code produced by gperf version 3.3 */
/* Command-line: gperf -m 10 unicase/special-casing-table.gperf  */
/* Computed positions: -k'1-3' */


#define TOTAL_KEYWORDS 123
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 147
/* maximum key range = 148, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
gl_unicase_special_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
       37,   0,  62, 148,   7, 148,  32, 148, 148, 148,
      148, 148,   1,   1, 148,  15,  99, 148,   0,  12,
        0, 148, 148, 148, 148, 148, 148, 148, 148,  67,
      148,  23,   9, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148,   6, 148,
      148, 148, 148, 148, 148, 148, 148,  22,  51,  17,
      148, 148, 148, 148,   3, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
       40, 148, 148, 148, 148, 148, 148, 148,  41, 148,
      148, 148, 148, 148, 148, 148,   0, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148,  12,  39,   0, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148,  79, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148,  73,   0,  27,  19,   8, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
       65, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148,  33,  43, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148,  30, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 102, 148,
      148, 148, 148, 148, 148, 148, 148, 148, 148, 148,
      148, 148, 148, 148,  76, 148, 148, 148, 148, 148,
      148, 148, 148,  60, 148, 148, 148, 148, 148, 148,
      105, 148, 148, 148, 148,  84, 148, 148,   2,   1,
        0,  17,  16,  83,  50,  15
    };
  (void) len;
  return asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

const struct special_casing_rule *
gl_unicase_special_lookup (register const char *str, register size_t len)
{
  static const unsigned char lengthtable[] =
    {
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  0,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
       0,  3,  0,  0,  3,  3,  0,  0,  0,  3,  0,  0,  0,  3,
       0,  0,  0,  0,  0,  0,  0,  3,  0,  0,  3,  0,  0,  3,
       3,  0,  3,  3,  0,  0,  0,  3
    };
#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif
  static const struct special_casing_rule wordlist[] =
    {
#line 112 "unicase/special-casing-table.gperf"
      {"\001\372`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6E, 0x0399,      0 }, { 0x1FA6,      0,      0 }, { 0x1FAE,      0,      0 }, { 0x1F66, 0x03B9,      0 }},
#line 96 "unicase/special-casing-table.gperf"
      {"\001\371`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2E, 0x0399,      0 }, { 0x1F96,      0,      0 }, { 0x1F9E,      0,      0 }, { 0x1F26, 0x03B9,      0 }},
#line 80 "unicase/special-casing-table.gperf"
      {"\001\370`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0E, 0x0399,      0 }, { 0x1F86,      0,      0 }, { 0x1F8E,      0,      0 }, { 0x1F06, 0x03B9,      0 }},
#line 110 "unicase/special-casing-table.gperf"
      {"\001\372@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6C, 0x0399,      0 }, { 0x1FA4,      0,      0 }, { 0x1FAC,      0,      0 }, { 0x1F64, 0x03B9,      0 }},
#line 94 "unicase/special-casing-table.gperf"
      {"\001\371@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2C, 0x0399,      0 }, { 0x1F94,      0,      0 }, { 0x1F9C,      0,      0 }, { 0x1F24, 0x03B9,      0 }},
#line 78 "unicase/special-casing-table.gperf"
      {"\001\370@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0C, 0x0399,      0 }, { 0x1F84,      0,      0 }, { 0x1F8C,      0,      0 }, { 0x1F04, 0x03B9,      0 }},
#line 109 "unicase/special-casing-table.gperf"
      {"\001\3720", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6B, 0x0399,      0 }, { 0x1FA3,      0,      0 }, { 0x1FAB,      0,      0 }, { 0x1F63, 0x03B9,      0 }},
#line 93 "unicase/special-casing-table.gperf"
      {"\001\3710", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2B, 0x0399,      0 }, { 0x1F93,      0,      0 }, { 0x1F9B,      0,      0 }, { 0x1F23, 0x03B9,      0 }},
#line 77 "unicase/special-casing-table.gperf"
      {"\001\3700", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0B, 0x0399,      0 }, { 0x1F83,      0,      0 }, { 0x1F8B,      0,      0 }, { 0x1F03, 0x03B9,      0 }},
#line 108 "unicase/special-casing-table.gperf"
      {"\001\372 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6A, 0x0399,      0 }, { 0x1FA2,      0,      0 }, { 0x1FAA,      0,      0 }, { 0x1F62, 0x03B9,      0 }},
#line 92 "unicase/special-casing-table.gperf"
      {"\001\371 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2A, 0x0399,      0 }, { 0x1F92,      0,      0 }, { 0x1F9A,      0,      0 }, { 0x1F22, 0x03B9,      0 }},
#line 76 "unicase/special-casing-table.gperf"
      {"\001\370 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0A, 0x0399,      0 }, { 0x1F82,      0,      0 }, { 0x1F8A,      0,      0 }, { 0x1F02, 0x03B9,      0 }},
#line 113 "unicase/special-casing-table.gperf"
      {"\001\372p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6F, 0x0399,      0 }, { 0x1FA7,      0,      0 }, { 0x1FAF,      0,      0 }, { 0x1F67, 0x03B9,      0 }},
#line 97 "unicase/special-casing-table.gperf"
      {"\001\371p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2F, 0x0399,      0 }, { 0x1F97,      0,      0 }, { 0x1F9F,      0,      0 }, { 0x1F27, 0x03B9,      0 }},
#line 81 "unicase/special-casing-table.gperf"
      {"\001\370p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0F, 0x0399,      0 }, { 0x1F87,      0,      0 }, { 0x1F8F,      0,      0 }, { 0x1F07, 0x03B9,      0 }},
#line 146 "unicase/special-casing-table.gperf"
      {"\001\377`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A9, 0x0342,      0 }, { 0x1FF6,      0,      0 }, { 0x03A9, 0x0342,      0 }, { 0x03C9, 0x0342,      0 }},
#line 131 "unicase/special-casing-table.gperf"
      {"\001\374`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0397, 0x0342,      0 }, { 0x1FC6,      0,      0 }, { 0x0397, 0x0342,      0 }, { 0x03B7, 0x0342,      0 }},
#line 125 "unicase/special-casing-table.gperf"
      {"\001\373`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0391, 0x0342,      0 }, { 0x1FB6,      0,      0 }, { 0x0391, 0x0342,      0 }, { 0x03B1, 0x0342,      0 }},
#line 145 "unicase/special-casing-table.gperf"
      {"\001\377@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x038F, 0x0399,      0 }, { 0x1FF4,      0,      0 }, { 0x038F, 0x0345,      0 }, { 0x03CE, 0x03B9,      0 }},
#line 130 "unicase/special-casing-table.gperf"
      {"\001\374@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0389, 0x0399,      0 }, { 0x1FC4,      0,      0 }, { 0x0389, 0x0345,      0 }, { 0x03AE, 0x03B9,      0 }},
#line 124 "unicase/special-casing-table.gperf"
      {"\001\373@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0386, 0x0399,      0 }, { 0x1FB4,      0,      0 }, { 0x0386, 0x0345,      0 }, { 0x03AC, 0x03B9,      0 }},
#line 144 "unicase/special-casing-table.gperf"
      {"\001\3770", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A9, 0x0399,      0 }, { 0x1FF3,      0,      0 }, { 0x1FFC,      0,      0 }, { 0x03C9, 0x03B9,      0 }},
#line 129 "unicase/special-casing-table.gperf"
      {"\001\3740", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0397, 0x0399,      0 }, { 0x1FC3,      0,      0 }, { 0x1FCC,      0,      0 }, { 0x03B7, 0x03B9,      0 }},
#line 123 "unicase/special-casing-table.gperf"
      {"\001\3730", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0391, 0x0399,      0 }, { 0x1FB3,      0,      0 }, { 0x1FBC,      0,      0 }, { 0x03B1, 0x03B9,      0 }},
#line 143 "unicase/special-casing-table.gperf"
      {"\001\377 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1FFA, 0x0399,      0 }, { 0x1FF2,      0,      0 }, { 0x1FFA, 0x0345,      0 }, { 0x1F7C, 0x03B9,      0 }},
#line 128 "unicase/special-casing-table.gperf"
      {"\001\374 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1FCA, 0x0399,      0 }, { 0x1FC2,      0,      0 }, { 0x1FCA, 0x0345,      0 }, { 0x1F74, 0x03B9,      0 }},
#line 122 "unicase/special-casing-table.gperf"
      {"\001\373 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1FBA, 0x0399,      0 }, { 0x1FB2,      0,      0 }, { 0x1FBA, 0x0345,      0 }, { 0x1F70, 0x03B9,      0 }},
#line 147 "unicase/special-casing-table.gperf"
      {"\001\377p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A9, 0x0342, 0x0399 }, { 0x1FF7,      0,      0 }, { 0x03A9, 0x0342, 0x0345 }, { 0x03C9, 0x0342, 0x03B9 }},
#line 132 "unicase/special-casing-table.gperf"
      {"\001\374p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0397, 0x0342, 0x0399 }, { 0x1FC7,      0,      0 }, { 0x0397, 0x0342, 0x0345 }, { 0x03B7, 0x0342, 0x03B9 }},
#line 126 "unicase/special-casing-table.gperf"
      {"\001\373p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0391, 0x0342, 0x0399 }, { 0x1FB7,      0,      0 }, { 0x0391, 0x0342, 0x0345 }, { 0x03B1, 0x0342, 0x03B9 }},
#line 118 "unicase/special-casing-table.gperf"
      {"\001\372\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6C, 0x0399,      0 }, { 0x1FA4,      0,      0 }, { 0x1FAC,      0,      0 }, { 0x1F64, 0x03B9,      0 }},
#line 102 "unicase/special-casing-table.gperf"
      {"\001\371\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2C, 0x0399,      0 }, { 0x1F94,      0,      0 }, { 0x1F9C,      0,      0 }, { 0x1F24, 0x03B9,      0 }},
#line 86 "unicase/special-casing-table.gperf"
      {"\001\370\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0C, 0x0399,      0 }, { 0x1F84,      0,      0 }, { 0x1F8C,      0,      0 }, { 0x1F04, 0x03B9,      0 }},
#line 117 "unicase/special-casing-table.gperf"
      {"\001\372\260", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6B, 0x0399,      0 }, { 0x1FA3,      0,      0 }, { 0x1FAB,      0,      0 }, { 0x1F63, 0x03B9,      0 }},
#line 101 "unicase/special-casing-table.gperf"
      {"\001\371\260", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2B, 0x0399,      0 }, { 0x1F93,      0,      0 }, { 0x1F9B,      0,      0 }, { 0x1F23, 0x03B9,      0 }},
#line 85 "unicase/special-casing-table.gperf"
      {"\001\370\260", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0B, 0x0399,      0 }, { 0x1F83,      0,      0 }, { 0x1F8B,      0,      0 }, { 0x1F03, 0x03B9,      0 }},
      {""},
#line 106 "unicase/special-casing-table.gperf"
      {"\001\372\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F68, 0x0399,      0 }, { 0x1FA0,      0,      0 }, { 0x1FA8,      0,      0 }, { 0x1F60, 0x03B9,      0 }},
#line 90 "unicase/special-casing-table.gperf"
      {"\001\371\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F28, 0x0399,      0 }, { 0x1F90,      0,      0 }, { 0x1F98,      0,      0 }, { 0x1F20, 0x03B9,      0 }},
#line 74 "unicase/special-casing-table.gperf"
      {"\001\370\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F08, 0x0399,      0 }, { 0x1F80,      0,      0 }, { 0x1F88,      0,      0 }, { 0x1F00, 0x03B9,      0 }},
#line 111 "unicase/special-casing-table.gperf"
      {"\001\372P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6D, 0x0399,      0 }, { 0x1FA5,      0,      0 }, { 0x1FAD,      0,      0 }, { 0x1F65, 0x03B9,      0 }},
#line 95 "unicase/special-casing-table.gperf"
      {"\001\371P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2D, 0x0399,      0 }, { 0x1F95,      0,      0 }, { 0x1F9D,      0,      0 }, { 0x1F25, 0x03B9,      0 }},
#line 79 "unicase/special-casing-table.gperf"
      {"\001\370P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0D, 0x0399,      0 }, { 0x1F85,      0,      0 }, { 0x1F8D,      0,      0 }, { 0x1F05, 0x03B9,      0 }},
#line 59 "unicase/special-casing-table.gperf"
      {"\0000r", 0,  SCC_AFTER_I          , {  'a',  'z' }, { 0x0307,      0,      0 }, {      0,      0,      0 }, { 0x0307,      0,      0 }, { 0x0307,      0,      0 }},
#line 40 "unicase/special-casing-table.gperf"
      {"\000\004\221", 1, -SCC_BEFORE_DOT       , {  't',  'r' }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }},
#line 148 "unicase/special-casing-table.gperf"
      {"\001\377\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A9, 0x0399,      0 }, { 0x1FF3,      0,      0 }, { 0x1FFC,      0,      0 }, { 0x03C9, 0x03B9,      0 }},
#line 133 "unicase/special-casing-table.gperf"
      {"\001\374\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0397, 0x0399,      0 }, { 0x1FC3,      0,      0 }, { 0x1FCC,      0,      0 }, { 0x03B7, 0x03B9,      0 }},
#line 127 "unicase/special-casing-table.gperf"
      {"\001\373\300", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0391, 0x0399,      0 }, { 0x1FB3,      0,      0 }, { 0x1FBC,      0,      0 }, { 0x03B1, 0x03B9,      0 }},
#line 155 "unicase/special-casing-table.gperf"
      {"\017\260`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0053, 0x0054,      0 }, { 0xFB06,      0,      0 }, { 0x0053, 0x0074,      0 }, { 0x0073, 0x0074,      0 }},
#line 53 "unicase/special-casing-table.gperf"
      {"\000\023\001", 1,  SCC_ALWAYS           , {  'a',  'z' }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }},
#line 141 "unicase/special-casing-table.gperf"
      {"\001\376`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0342,      0 }, { 0x1FE6,      0,      0 }, { 0x03A5, 0x0342,      0 }, { 0x03C5, 0x0342,      0 }},
#line 153 "unicase/special-casing-table.gperf"
      {"\017\260@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0046, 0x0046, 0x004C }, { 0xFB04,      0,      0 }, { 0x0046, 0x0066, 0x006C }, { 0x0066, 0x0066, 0x006C }},
#line 43 "unicase/special-casing-table.gperf"
      {"\000\004\224", 0,  SCC_ALWAYS           , {  'a',  'z' }, { 0x0049,      0,      0 }, { 0x0069,      0,      0 }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }},
#line 140 "unicase/special-casing-table.gperf"
      {"\001\376@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A1, 0x0313,      0 }, { 0x1FE4,      0,      0 }, { 0x03A1, 0x0313,      0 }, { 0x03C1, 0x0313,      0 }},
#line 152 "unicase/special-casing-table.gperf"
      {"\017\2600", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0046, 0x0046, 0x0049 }, { 0xFB03,      0,      0 }, { 0x0046, 0x0066, 0x0069 }, { 0x0066, 0x0066, 0x0069 }},
#line 57 "unicase/special-casing-table.gperf"
      {"\0000p", 1,  SCC_AFTER_SOFT_DOTTED, {  'l',  't' }, {      0,      0,      0 }, { 0x0307,      0,      0 }, {      0,      0,      0 }, { 0x0307,      0,      0 }},
#line 139 "unicase/special-casing-table.gperf"
      {"\001\3760", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0308, 0x0301 }, { 0x1FE3,      0,      0 }, { 0x03A5, 0x0308, 0x0301 }, { 0x03C5, 0x0308, 0x0301 }},
#line 151 "unicase/special-casing-table.gperf"
      {"\017\260 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0046, 0x004C,      0 }, { 0xFB02,      0,      0 }, { 0x0046, 0x006C,      0 }, { 0x0066, 0x006C,      0 }},
#line 159 "unicase/special-casing-table.gperf"
      {"\017\261`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x054E, 0x0546,      0 }, { 0xFB16,      0,      0 }, { 0x054E, 0x0576,      0 }, { 0x057E, 0x0576,      0 }},
#line 138 "unicase/special-casing-table.gperf"
      {"\001\376 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0308, 0x0300 }, { 0x1FE2,      0,      0 }, { 0x03A5, 0x0308, 0x0300 }, { 0x03C5, 0x0308, 0x0300 }},
#line 64 "unicase/special-casing-table.gperf"
      {"\001\351`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0048, 0x0331,      0 }, { 0x1E96,      0,      0 }, { 0x0048, 0x0331,      0 }, { 0x0068, 0x0331,      0 }},
#line 157 "unicase/special-casing-table.gperf"
      {"\017\261@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0544, 0x0535,      0 }, { 0xFB14,      0,      0 }, { 0x0544, 0x0565,      0 }, { 0x0574, 0x0565,      0 }},
#line 142 "unicase/special-casing-table.gperf"
      {"\001\376p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0308, 0x0342 }, { 0x1FE7,      0,      0 }, { 0x03A5, 0x0308, 0x0342 }, { 0x03C5, 0x0308, 0x0342 }},
#line 42 "unicase/special-casing-table.gperf"
      {"\000\004\223", 1,  SCC_ALWAYS           , {  't',  'r' }, { 0x0049,      0,      0 }, { 0x0069,      0,      0 }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }},
#line 156 "unicase/special-casing-table.gperf"
      {"\017\2610", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0544, 0x0546,      0 }, { 0xFB13,      0,      0 }, { 0x0544, 0x0576,      0 }, { 0x0574, 0x0576,      0 }},
#line 116 "unicase/special-casing-table.gperf"
      {"\001\372\240", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6A, 0x0399,      0 }, { 0x1FA2,      0,      0 }, { 0x1FAA,      0,      0 }, { 0x1F62, 0x03B9,      0 }},
#line 100 "unicase/special-casing-table.gperf"
      {"\001\371\240", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2A, 0x0399,      0 }, { 0x1F92,      0,      0 }, { 0x1F9A,      0,      0 }, { 0x1F22, 0x03B9,      0 }},
#line 84 "unicase/special-casing-table.gperf"
      {"\001\370\240", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0A, 0x0399,      0 }, { 0x1F82,      0,      0 }, { 0x1F8A,      0,      0 }, { 0x1F02, 0x03B9,      0 }},
#line 47 "unicase/special-casing-table.gperf"
      {"\000\014\300", 0,  SCC_ALWAYS           , {  'l',  't' }, { 0x00CC,      0,      0 }, { 0x0069, 0x0307, 0x0300 }, { 0x00CC,      0,      0 }, { 0x00EC,      0,      0 }},
#line 46 "unicase/special-casing-table.gperf"
      {"\000\006\221", 0,  SCC_ALWAYS           , {  'a',  'z' }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }},
#line 160 "unicase/special-casing-table.gperf"
      {"\017\261p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0544, 0x053D,      0 }, { 0xFB17,      0,      0 }, { 0x0544, 0x056D,      0 }, { 0x0574, 0x056D,      0 }},
#line 41 "unicase/special-casing-table.gperf"
      {"\000\004\222", 1, -SCC_BEFORE_DOT       , {  'a',  'z' }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }, { 0x0049,      0,      0 }, { 0x0131,      0,      0 }},
#line 65 "unicase/special-casing-table.gperf"
      {"\001\351p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0054, 0x0308,      0 }, { 0x1E97,      0,      0 }, { 0x0054, 0x0308,      0 }, { 0x0074, 0x0308,      0 }},
#line 115 "unicase/special-casing-table.gperf"
      {"\001\372\220", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F69, 0x0399,      0 }, { 0x1FA1,      0,      0 }, { 0x1FA9,      0,      0 }, { 0x1F61, 0x03B9,      0 }},
#line 99 "unicase/special-casing-table.gperf"
      {"\001\371\220", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F29, 0x0399,      0 }, { 0x1F91,      0,      0 }, { 0x1F99,      0,      0 }, { 0x1F21, 0x03B9,      0 }},
#line 83 "unicase/special-casing-table.gperf"
      {"\001\370\220", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F09, 0x0399,      0 }, { 0x1F81,      0,      0 }, { 0x1F89,      0,      0 }, { 0x1F01, 0x03B9,      0 }},
#line 120 "unicase/special-casing-table.gperf"
      {"\001\372\340", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6E, 0x0399,      0 }, { 0x1FA6,      0,      0 }, { 0x1FAE,      0,      0 }, { 0x1F66, 0x03B9,      0 }},
#line 104 "unicase/special-casing-table.gperf"
      {"\001\371\340", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2E, 0x0399,      0 }, { 0x1F96,      0,      0 }, { 0x1F9E,      0,      0 }, { 0x1F26, 0x03B9,      0 }},
#line 88 "unicase/special-casing-table.gperf"
      {"\001\370\340", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0E, 0x0399,      0 }, { 0x1F86,      0,      0 }, { 0x1F8E,      0,      0 }, { 0x1F06, 0x03B9,      0 }},
#line 114 "unicase/special-casing-table.gperf"
      {"\001\372\200", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F68, 0x0399,      0 }, { 0x1FA0,      0,      0 }, { 0x1FA8,      0,      0 }, { 0x1F60, 0x03B9,      0 }},
#line 98 "unicase/special-casing-table.gperf"
      {"\001\371\200", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F28, 0x0399,      0 }, { 0x1F90,      0,      0 }, { 0x1F98,      0,      0 }, { 0x1F20, 0x03B9,      0 }},
#line 82 "unicase/special-casing-table.gperf"
      {"\001\370\200", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F08, 0x0399,      0 }, { 0x1F80,      0,      0 }, { 0x1F88,      0,      0 }, { 0x1F00, 0x03B9,      0 }},
#line 58 "unicase/special-casing-table.gperf"
      {"\0000q", 1,  SCC_AFTER_I          , {  't',  'r' }, { 0x0307,      0,      0 }, {      0,      0,      0 }, { 0x0307,      0,      0 }, { 0x0307,      0,      0 }},
#line 136 "unicase/special-casing-table.gperf"
      {"\001\375`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0399, 0x0342,      0 }, { 0x1FD6,      0,      0 }, { 0x0399, 0x0342,      0 }, { 0x03B9, 0x0342,      0 }},
#line 73 "unicase/special-casing-table.gperf"
      {"\001\365`", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0313, 0x0342 }, { 0x1F56,      0,      0 }, { 0x03A5, 0x0313, 0x0342 }, { 0x03C5, 0x0313, 0x0342 }},
#line 149 "unicase/special-casing-table.gperf"
      {"\017\260\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0046, 0x0046,      0 }, { 0xFB00,      0,      0 }, { 0x0046, 0x0066,      0 }, { 0x0066, 0x0066,      0 }},
#line 52 "unicase/special-casing-table.gperf"
      {"\000\023\000", 1,  SCC_ALWAYS           , {  't',  'r' }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }},
#line 72 "unicase/special-casing-table.gperf"
      {"\001\365@", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0313, 0x0301 }, { 0x1F54,      0,      0 }, { 0x03A5, 0x0313, 0x0301 }, { 0x03C5, 0x0313, 0x0301 }},
#line 154 "unicase/special-casing-table.gperf"
      {"\017\260P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0053, 0x0054,      0 }, { 0xFB05,      0,      0 }, { 0x0053, 0x0074,      0 }, { 0x0073, 0x0074,      0 }},
#line 135 "unicase/special-casing-table.gperf"
      {"\001\3750", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0399, 0x0308, 0x0301 }, { 0x1FD3,      0,      0 }, { 0x0399, 0x0308, 0x0301 }, { 0x03B9, 0x0308, 0x0301 }},
#line 63 "unicase/special-casing-table.gperf"
      {"\000Xp", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0535, 0x0552,      0 }, { 0x0587,      0,      0 }, { 0x0535, 0x0582,      0 }, { 0x0565, 0x0582,      0 }},
#line 62 "unicase/special-casing-table.gperf"
      {"\000;\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0308, 0x0301 }, { 0x03B0,      0,      0 }, { 0x03A5, 0x0308, 0x0301 }, { 0x03C5, 0x0308, 0x0301 }},
#line 134 "unicase/special-casing-table.gperf"
      {"\001\375 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0399, 0x0308, 0x0300 }, { 0x1FD2,      0,      0 }, { 0x0399, 0x0308, 0x0300 }, { 0x03B9, 0x0308, 0x0300 }},
#line 71 "unicase/special-casing-table.gperf"
      {"\001\365 ", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0313, 0x0300 }, { 0x1F52,      0,      0 }, { 0x03A5, 0x0313, 0x0300 }, { 0x03C5, 0x0313, 0x0300 }},
#line 61 "unicase/special-casing-table.gperf"
      {"\000:0", 0,  SCC_FINAL_SIGMA      , { '\0', '\0' }, { 0x03A3,      0,      0 }, { 0x03C2,      0,      0 }, { 0x03A3,      0,      0 }, { 0x03C3,      0,      0 }},
#line 137 "unicase/special-casing-table.gperf"
      {"\001\375p", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0399, 0x0308, 0x0342 }, { 0x1FD7,      0,      0 }, { 0x0399, 0x0308, 0x0342 }, { 0x03B9, 0x0308, 0x0342 }},
#line 60 "unicase/special-casing-table.gperf"
      {"\0009\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0399, 0x0308, 0x0301 }, { 0x0390,      0,      0 }, { 0x0399, 0x0308, 0x0301 }, { 0x03B9, 0x0308, 0x0301 }},
#line 56 "unicase/special-casing-table.gperf"
      {"\000\037\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x004A, 0x030C,      0 }, { 0x01F0,      0,      0 }, { 0x004A, 0x030C,      0 }, { 0x006A, 0x030C,      0 }},
#line 158 "unicase/special-casing-table.gperf"
      {"\017\261P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0544, 0x053B,      0 }, { 0xFB15,      0,      0 }, { 0x0544, 0x056B,      0 }, { 0x0574, 0x056B,      0 }},
#line 107 "unicase/special-casing-table.gperf"
      {"\001\372\020", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F69, 0x0399,      0 }, { 0x1FA1,      0,      0 }, { 0x1FA9,      0,      0 }, { 0x1F61, 0x03B9,      0 }},
#line 91 "unicase/special-casing-table.gperf"
      {"\001\371\020", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F29, 0x0399,      0 }, { 0x1F91,      0,      0 }, { 0x1F99,      0,      0 }, { 0x1F21, 0x03B9,      0 }},
#line 75 "unicase/special-casing-table.gperf"
      {"\001\370\020", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F09, 0x0399,      0 }, { 0x1F81,      0,      0 }, { 0x1F89,      0,      0 }, { 0x1F01, 0x03B9,      0 }},
#line 119 "unicase/special-casing-table.gperf"
      {"\001\372\320", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6D, 0x0399,      0 }, { 0x1FA5,      0,      0 }, { 0x1FAD,      0,      0 }, { 0x1F65, 0x03B9,      0 }},
#line 103 "unicase/special-casing-table.gperf"
      {"\001\371\320", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2D, 0x0399,      0 }, { 0x1F95,      0,      0 }, { 0x1F9D,      0,      0 }, { 0x1F25, 0x03B9,      0 }},
#line 87 "unicase/special-casing-table.gperf"
      {"\001\370\320", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0D, 0x0399,      0 }, { 0x1F85,      0,      0 }, { 0x1F8D,      0,      0 }, { 0x1F05, 0x03B9,      0 }},
#line 121 "unicase/special-casing-table.gperf"
      {"\001\372\360", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F6F, 0x0399,      0 }, { 0x1FA7,      0,      0 }, { 0x1FAF,      0,      0 }, { 0x1F67, 0x03B9,      0 }},
#line 105 "unicase/special-casing-table.gperf"
      {"\001\371\360", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F2F, 0x0399,      0 }, { 0x1F97,      0,      0 }, { 0x1F9F,      0,      0 }, { 0x1F27, 0x03B9,      0 }},
#line 89 "unicase/special-casing-table.gperf"
      {"\001\370\360", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1F0F, 0x0399,      0 }, { 0x1F87,      0,      0 }, { 0x1F8F,      0,      0 }, { 0x1F07, 0x03B9,      0 }},
#line 161 "unicase/special-casing-table.gperf"
      {"\035\371P", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0053, 0x0053,      0 }, { 0x1DF95,      0,      0 }, { 0x0053, 0x0073,      0 }, { 0x0073, 0x0073,      0 }},
#line 44 "unicase/special-casing-table.gperf"
      {"\000\004\240", 0,  SCC_MORE_ABOVE       , {  'l',  't' }, { 0x004A,      0,      0 }, { 0x006A, 0x0307,      0 }, { 0x004A,      0,      0 }, { 0x006A,      0,      0 }},
#line 55 "unicase/special-casing-table.gperf"
      {"\000\024\220", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x02BC, 0x004E,      0 }, { 0x0149,      0,      0 }, { 0x02BC, 0x004E,      0 }, { 0x02BC, 0x006E,      0 }},
#line 54 "unicase/special-casing-table.gperf"
      {"\000\023\002", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0130,      0,      0 }, { 0x0069, 0x0307,      0 }, { 0x0130,      0,      0 }, { 0x0069, 0x0307,      0 }},
      {""},
#line 51 "unicase/special-casing-table.gperf"
      {"\000\022\340", 0,  SCC_MORE_ABOVE       , {  'l',  't' }, { 0x012E,      0,      0 }, { 0x012F, 0x0307,      0 }, { 0x012E,      0,      0 }, { 0x012F,      0,      0 }},
      {""}, {""},
#line 50 "unicase/special-casing-table.gperf"
      {"\000\022\200", 0,  SCC_ALWAYS           , {  'l',  't' }, { 0x0128,      0,      0 }, { 0x0069, 0x0307, 0x0303 }, { 0x0128,      0,      0 }, { 0x0129,      0,      0 }},
#line 39 "unicase/special-casing-table.gperf"
      {"\000\004\220", 1,  SCC_MORE_ABOVE       , {  'l',  't' }, { 0x0049,      0,      0 }, { 0x0069, 0x0307,      0 }, { 0x0049,      0,      0 }, { 0x0069,      0,      0 }},
      {""}, {""}, {""},
#line 70 "unicase/special-casing-table.gperf"
      {"\001\365\000", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x03A5, 0x0313,      0 }, { 0x1F50,      0,      0 }, { 0x03A5, 0x0313,      0 }, { 0x03C5, 0x0313,      0 }},
      {""}, {""}, {""},
#line 68 "unicase/special-casing-table.gperf"
      {"\001\351\240", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0041, 0x02BE,      0 }, { 0x1E9A,      0,      0 }, { 0x0041, 0x02BE,      0 }, { 0x0061, 0x02BE,      0 }},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 67 "unicase/special-casing-table.gperf"
      {"\001\351\220", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0059, 0x030A,      0 }, { 0x1E99,      0,      0 }, { 0x0059, 0x030A,      0 }, { 0x0079, 0x030A,      0 }},
      {""}, {""},
#line 69 "unicase/special-casing-table.gperf"
      {"\001\351\340", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x1E9E,      0,      0 }, { 0x00DF,      0,      0 }, { 0x1E9E,      0,      0 }, { 0x0073, 0x0073,      0 }},
      {""}, {""},
#line 66 "unicase/special-casing-table.gperf"
      {"\001\351\200", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0057, 0x030A,      0 }, { 0x1E98,      0,      0 }, { 0x0057, 0x030A,      0 }, { 0x0077, 0x030A,      0 }},
#line 48 "unicase/special-casing-table.gperf"
      {"\000\014\320", 0,  SCC_ALWAYS           , {  'l',  't' }, { 0x00CD,      0,      0 }, { 0x0069, 0x0307, 0x0301 }, { 0x00CD,      0,      0 }, { 0x00ED,      0,      0 }},
      {""},
#line 45 "unicase/special-casing-table.gperf"
      {"\000\006\220", 1,  SCC_ALWAYS           , {  't',  'r' }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }, { 0x0130,      0,      0 }, { 0x0069,      0,      0 }},
#line 49 "unicase/special-casing-table.gperf"
      {"\000\015\360", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0053, 0x0053,      0 }, { 0x00DF,      0,      0 }, { 0x0053, 0x0073,      0 }, { 0x0073, 0x0073,      0 }},
      {""}, {""}, {""},
#line 150 "unicase/special-casing-table.gperf"
      {"\017\260\020", 0,  SCC_ALWAYS           , { '\0', '\0' }, { 0x0046, 0x0049,      0 }, { 0xFB01,      0,      0 }, { 0x0046, 0x0069,      0 }, { 0x0066, 0x0069,      0 }}
    };
#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic pop
#endif

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = gl_unicase_special_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].code;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return (struct special_casing_rule *) 0;
}
