/* ANSI-C code produced by gperf version 3.3 */
/* Command-line: gperf -m 10 unictype/scripts_byname.gperf  */
/* Computed positions: -k'1,3,5,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 20 "unictype/scripts_byname.gperf"
struct named_script { int name; unsigned int index; };

#define TOTAL_KEYWORDS 177
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 22
#define MIN_HASH_VALUE 19
#define MAX_HASH_VALUE 326
/* maximum key range = 308, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
scripts_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327,  86,   8,  29,  76,  19,
      327,  70, 116,  72,  94,   7,  70,  44,  50,  30,
       37, 327,  71,   5,   7,   6, 153,  26, 327,  23,
       11, 327, 327, 327, 327,  37, 327,  12,  82,  94,
       17,  17,  55,  52, 109,  10,  30,  21,  54,   7,
        5,  25,  95, 327,   5,  90,   8,  65,  24,  52,
      327,  97,   5, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
      327, 327, 327, 327, 327, 327
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
#if (defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang__ && __clang_major__ + (__clang_minor__ >= 9) > 3))) || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 202000L && ((defined __GNUC__ && __GNUC__ >= 10) || (defined __clang__ && __clang_major__ >= 9)))
      [[fallthrough]];
#elif (defined __GNUC__ && __GNUC__ >= 7) || (defined __clang__ && __clang_major__ >= 10)
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
#if (defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang__ && __clang_major__ + (__clang_minor__ >= 9) > 3))) || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 202000L && ((defined __GNUC__ && __GNUC__ >= 10) || (defined __clang__ && __clang_major__ >= 9)))
      [[fallthrough]];
#elif (defined __GNUC__ && __GNUC__ >= 7) || (defined __clang__ && __clang_major__ >= 10)
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
#if (defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang__ && __clang_major__ + (__clang_minor__ >= 9) > 3))) || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 202000L && ((defined __GNUC__ && __GNUC__ >= 10) || (defined __clang__ && __clang_major__ >= 9)))
      [[fallthrough]];
#elif (defined __GNUC__ && __GNUC__ >= 7) || (defined __clang__ && __clang_major__ >= 10)
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct script_stringpool_t
  {
    char script_stringpool_str19[sizeof("Toto")];
    char script_stringpool_str21[sizeof("Seal")];
    char script_stringpool_str23[sizeof("Thai")];
    char script_stringpool_str24[sizeof("Khmer")];
    char script_stringpool_str25[sizeof("Yi")];
    char script_stringpool_str27[sizeof("Bamum")];
    char script_stringpool_str28[sizeof("Syriac")];
    char script_stringpool_str29[sizeof("Sinhala")];
    char script_stringpool_str30[sizeof("Thaana")];
    char script_stringpool_str31[sizeof("Kannada")];
    char script_stringpool_str32[sizeof("Bengali")];
    char script_stringpool_str33[sizeof("Brahmi")];
    char script_stringpool_str34[sizeof("Shavian")];
    char script_stringpool_str35[sizeof("Todhri")];
    char script_stringpool_str36[sizeof("Sharada")];
    char script_stringpool_str37[sizeof("Sidetic")];
    char script_stringpool_str38[sizeof("Samaritan")];
    char script_stringpool_str39[sizeof("Tai_Tham")];
    char script_stringpool_str40[sizeof("Beria_Erfe")];
    char script_stringpool_str41[sizeof("Kirat_Rai")];
    char script_stringpool_str42[sizeof("Batak")];
    char script_stringpool_str43[sizeof("Takri")];
    char script_stringpool_str45[sizeof("Cham")];
    char script_stringpool_str46[sizeof("Tai_Yo")];
    char script_stringpool_str49[sizeof("Osmanya")];
    char script_stringpool_str51[sizeof("Yezidi")];
    char script_stringpool_str52[sizeof("Carian")];
    char script_stringpool_str53[sizeof("Khitan_Small_Script")];
    char script_stringpool_str54[sizeof("Chakma")];
    char script_stringpool_str56[sizeof("Katakana")];
    char script_stringpool_str57[sizeof("Oriya")];
    char script_stringpool_str58[sizeof("Cuneiform")];
    char script_stringpool_str59[sizeof("Khojki")];
    char script_stringpool_str60[sizeof("Miao")];
    char script_stringpool_str62[sizeof("Kharoshthi")];
    char script_stringpool_str63[sizeof("Kawi")];
    char script_stringpool_str64[sizeof("Osage")];
    char script_stringpool_str65[sizeof("Modi")];
    char script_stringpool_str66[sizeof("Sora_Sompeng")];
    char script_stringpool_str67[sizeof("Common")];
    char script_stringpool_str68[sizeof("Mandaic")];
    char script_stringpool_str69[sizeof("Sunuwar")];
    char script_stringpool_str70[sizeof("Myanmar")];
    char script_stringpool_str71[sizeof("Bhaiksuki")];
    char script_stringpool_str72[sizeof("Mro")];
    char script_stringpool_str73[sizeof("Tamil")];
    char script_stringpool_str74[sizeof("Sogdian")];
    char script_stringpool_str75[sizeof("Canadian_Aboriginal")];
    char script_stringpool_str76[sizeof("Warang_Citi")];
    char script_stringpool_str77[sizeof("Old_South_Arabian")];
    char script_stringpool_str78[sizeof("Nko")];
    char script_stringpool_str79[sizeof("Ol_Onal")];
    char script_stringpool_str80[sizeof("Old_Sogdian")];
    char script_stringpool_str81[sizeof("Braille")];
    char script_stringpool_str82[sizeof("Tolong_Siki")];
    char script_stringpool_str83[sizeof("Tangut")];
    char script_stringpool_str84[sizeof("Tirhuta")];
    char script_stringpool_str85[sizeof("Old_Turkic")];
    char script_stringpool_str86[sizeof("Chorasmian")];
    char script_stringpool_str87[sizeof("Phoenician")];
    char script_stringpool_str88[sizeof("Latin")];
    char script_stringpool_str89[sizeof("Mende_Kikakui")];
    char script_stringpool_str90[sizeof("Buginese")];
    char script_stringpool_str91[sizeof("Tagbanwa")];
    char script_stringpool_str92[sizeof("Balinese")];
    char script_stringpool_str93[sizeof("Tai_Le")];
    char script_stringpool_str94[sizeof("Gothic")];
    char script_stringpool_str95[sizeof("Mongolian")];
    char script_stringpool_str96[sizeof("Cherokee")];
    char script_stringpool_str97[sizeof("Grantha")];
    char script_stringpool_str98[sizeof("Lao")];
    char script_stringpool_str99[sizeof("Gurung_Khema")];
    char script_stringpool_str100[sizeof("Saurashtra")];
    char script_stringpool_str101[sizeof("Old_Permic")];
    char script_stringpool_str102[sizeof("SignWriting")];
    char script_stringpool_str103[sizeof("Linear_B")];
    char script_stringpool_str104[sizeof("Tibetan")];
    char script_stringpool_str105[sizeof("Lydian")];
    char script_stringpool_str106[sizeof("Newa")];
    char script_stringpool_str108[sizeof("Tangsa")];
    char script_stringpool_str109[sizeof("Psalter_Pahlavi")];
    char script_stringpool_str110[sizeof("Khudawadi")];
    char script_stringpool_str111[sizeof("Armenian")];
    char script_stringpool_str112[sizeof("Rejang")];
    char script_stringpool_str113[sizeof("Greek")];
    char script_stringpool_str114[sizeof("Arabic")];
    char script_stringpool_str115[sizeof("Ahom")];
    char script_stringpool_str116[sizeof("Soyombo")];
    char script_stringpool_str117[sizeof("Multani")];
    char script_stringpool_str118[sizeof("Avestan")];
    char script_stringpool_str119[sizeof("Telugu")];
    char script_stringpool_str120[sizeof("Tagalog")];
    char script_stringpool_str121[sizeof("Sundanese")];
    char script_stringpool_str122[sizeof("Old_North_Arabian")];
    char script_stringpool_str123[sizeof("Gujarati")];
    char script_stringpool_str124[sizeof("Han")];
    char script_stringpool_str125[sizeof("Glagolitic")];
    char script_stringpool_str126[sizeof("Zanabazar_Square")];
    char script_stringpool_str127[sizeof("Devanagari")];
    char script_stringpool_str128[sizeof("Nandinagari")];
    char script_stringpool_str129[sizeof("Syloti_Nagri")];
    char script_stringpool_str130[sizeof("Ugaritic")];
    char script_stringpool_str131[sizeof("Bassa_Vah")];
    char script_stringpool_str132[sizeof("Kaithi")];
    char script_stringpool_str133[sizeof("Hanunoo")];
    char script_stringpool_str134[sizeof("Meetei_Mayek")];
    char script_stringpool_str135[sizeof("Elymaic")];
    char script_stringpool_str136[sizeof("Caucasian_Albanian")];
    char script_stringpool_str137[sizeof("Gunjala_Gondi")];
    char script_stringpool_str138[sizeof("Siddham")];
    char script_stringpool_str139[sizeof("Buhid")];
    char script_stringpool_str140[sizeof("Coptic")];
    char script_stringpool_str141[sizeof("Cypriot")];
    char script_stringpool_str142[sizeof("Hatran")];
    char script_stringpool_str143[sizeof("Bopomofo")];
    char script_stringpool_str144[sizeof("Medefaidrin")];
    char script_stringpool_str145[sizeof("Dogra")];
    char script_stringpool_str146[sizeof("Wancho")];
    char script_stringpool_str147[sizeof("Limbu")];
    char script_stringpool_str148[sizeof("Javanese")];
    char script_stringpool_str149[sizeof("Egyptian_Hieroglyphs")];
    char script_stringpool_str151[sizeof("Ogham")];
    char script_stringpool_str152[sizeof("Adlam")];
    char script_stringpool_str155[sizeof("Nyiakeng_Puachue_Hmong")];
    char script_stringpool_str156[sizeof("Anatolian_Hieroglyphs")];
    char script_stringpool_str157[sizeof("New_Tai_Lue")];
    char script_stringpool_str158[sizeof("Gurmukhi")];
    char script_stringpool_str159[sizeof("Phags_Pa")];
    char script_stringpool_str160[sizeof("Georgian")];
    char script_stringpool_str161[sizeof("Nabataean")];
    char script_stringpool_str162[sizeof("Makasar")];
    char script_stringpool_str163[sizeof("Tulu_Tigalari")];
    char script_stringpool_str164[sizeof("Lisu")];
    char script_stringpool_str165[sizeof("Marchen")];
    char script_stringpool_str166[sizeof("Vai")];
    char script_stringpool_str167[sizeof("Proto_Cuneiform")];
    char script_stringpool_str169[sizeof("Meroitic_Cursive")];
    char script_stringpool_str170[sizeof("Manichaean")];
    char script_stringpool_str171[sizeof("Cypro_Minoan")];
    char script_stringpool_str172[sizeof("Old_Uyghur")];
    char script_stringpool_str173[sizeof("Meroitic_Hieroglyphs")];
    char script_stringpool_str174[sizeof("Nag_Mundari")];
    char script_stringpool_str175[sizeof("Runic")];
    char script_stringpool_str177[sizeof("Garay")];
    char script_stringpool_str178[sizeof("Deseret")];
    char script_stringpool_str179[sizeof("Pau_Cin_Hau")];
    char script_stringpool_str181[sizeof("Linear_A")];
    char script_stringpool_str182[sizeof("Lycian")];
    char script_stringpool_str183[sizeof("Old_Italic")];
    char script_stringpool_str184[sizeof("Tifinagh")];
    char script_stringpool_str185[sizeof("Old_Persian")];
    char script_stringpool_str186[sizeof("Tai_Viet")];
    char script_stringpool_str189[sizeof("Masaram_Gondi")];
    char script_stringpool_str190[sizeof("Cyrillic")];
    char script_stringpool_str192[sizeof("Hangul")];
    char script_stringpool_str193[sizeof("Hiragana")];
    char script_stringpool_str194[sizeof("Ol_Chiki")];
    char script_stringpool_str196[sizeof("Inscriptional_Pahlavi")];
    char script_stringpool_str197[sizeof("Inscriptional_Parthian")];
    char script_stringpool_str198[sizeof("Elbasan")];
    char script_stringpool_str200[sizeof("Vithkuqi")];
    char script_stringpool_str201[sizeof("Mahajani")];
    char script_stringpool_str202[sizeof("Palmyrene")];
    char script_stringpool_str209[sizeof("Duployan")];
    char script_stringpool_str210[sizeof("Nushu")];
    char script_stringpool_str212[sizeof("Inherited")];
    char script_stringpool_str215[sizeof("Jurchen")];
    char script_stringpool_str216[sizeof("Malayalam")];
    char script_stringpool_str221[sizeof("Hebrew")];
    char script_stringpool_str222[sizeof("Dives_Akuru")];
    char script_stringpool_str228[sizeof("Old_Hungarian")];
    char script_stringpool_str231[sizeof("Kayah_Li")];
    char script_stringpool_str242[sizeof("Imperial_Aramaic")];
    char script_stringpool_str255[sizeof("Ethiopic")];
    char script_stringpool_str262[sizeof("Hanifi_Rohingya")];
    char script_stringpool_str280[sizeof("Lepcha")];
    char script_stringpool_str326[sizeof("Pahawh_Hmong")];
  };
static const struct script_stringpool_t script_stringpool_contents =
  {
    "Toto",
    "Seal",
    "Thai",
    "Khmer",
    "Yi",
    "Bamum",
    "Syriac",
    "Sinhala",
    "Thaana",
    "Kannada",
    "Bengali",
    "Brahmi",
    "Shavian",
    "Todhri",
    "Sharada",
    "Sidetic",
    "Samaritan",
    "Tai_Tham",
    "Beria_Erfe",
    "Kirat_Rai",
    "Batak",
    "Takri",
    "Cham",
    "Tai_Yo",
    "Osmanya",
    "Yezidi",
    "Carian",
    "Khitan_Small_Script",
    "Chakma",
    "Katakana",
    "Oriya",
    "Cuneiform",
    "Khojki",
    "Miao",
    "Kharoshthi",
    "Kawi",
    "Osage",
    "Modi",
    "Sora_Sompeng",
    "Common",
    "Mandaic",
    "Sunuwar",
    "Myanmar",
    "Bhaiksuki",
    "Mro",
    "Tamil",
    "Sogdian",
    "Canadian_Aboriginal",
    "Warang_Citi",
    "Old_South_Arabian",
    "Nko",
    "Ol_Onal",
    "Old_Sogdian",
    "Braille",
    "Tolong_Siki",
    "Tangut",
    "Tirhuta",
    "Old_Turkic",
    "Chorasmian",
    "Phoenician",
    "Latin",
    "Mende_Kikakui",
    "Buginese",
    "Tagbanwa",
    "Balinese",
    "Tai_Le",
    "Gothic",
    "Mongolian",
    "Cherokee",
    "Grantha",
    "Lao",
    "Gurung_Khema",
    "Saurashtra",
    "Old_Permic",
    "SignWriting",
    "Linear_B",
    "Tibetan",
    "Lydian",
    "Newa",
    "Tangsa",
    "Psalter_Pahlavi",
    "Khudawadi",
    "Armenian",
    "Rejang",
    "Greek",
    "Arabic",
    "Ahom",
    "Soyombo",
    "Multani",
    "Avestan",
    "Telugu",
    "Tagalog",
    "Sundanese",
    "Old_North_Arabian",
    "Gujarati",
    "Han",
    "Glagolitic",
    "Zanabazar_Square",
    "Devanagari",
    "Nandinagari",
    "Syloti_Nagri",
    "Ugaritic",
    "Bassa_Vah",
    "Kaithi",
    "Hanunoo",
    "Meetei_Mayek",
    "Elymaic",
    "Caucasian_Albanian",
    "Gunjala_Gondi",
    "Siddham",
    "Buhid",
    "Coptic",
    "Cypriot",
    "Hatran",
    "Bopomofo",
    "Medefaidrin",
    "Dogra",
    "Wancho",
    "Limbu",
    "Javanese",
    "Egyptian_Hieroglyphs",
    "Ogham",
    "Adlam",
    "Nyiakeng_Puachue_Hmong",
    "Anatolian_Hieroglyphs",
    "New_Tai_Lue",
    "Gurmukhi",
    "Phags_Pa",
    "Georgian",
    "Nabataean",
    "Makasar",
    "Tulu_Tigalari",
    "Lisu",
    "Marchen",
    "Vai",
    "Proto_Cuneiform",
    "Meroitic_Cursive",
    "Manichaean",
    "Cypro_Minoan",
    "Old_Uyghur",
    "Meroitic_Hieroglyphs",
    "Nag_Mundari",
    "Runic",
    "Garay",
    "Deseret",
    "Pau_Cin_Hau",
    "Linear_A",
    "Lycian",
    "Old_Italic",
    "Tifinagh",
    "Old_Persian",
    "Tai_Viet",
    "Masaram_Gondi",
    "Cyrillic",
    "Hangul",
    "Hiragana",
    "Ol_Chiki",
    "Inscriptional_Pahlavi",
    "Inscriptional_Parthian",
    "Elbasan",
    "Vithkuqi",
    "Mahajani",
    "Palmyrene",
    "Duployan",
    "Nushu",
    "Inherited",
    "Jurchen",
    "Malayalam",
    "Hebrew",
    "Dives_Akuru",
    "Old_Hungarian",
    "Kayah_Li",
    "Imperial_Aramaic",
    "Ethiopic",
    "Hanifi_Rohingya",
    "Lepcha",
    "Pahawh_Hmong"
  };
#define script_stringpool ((const char *) &script_stringpool_contents)

#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif
static const struct named_script script_names[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 190 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str19, 159},
    {-1},
#line 207 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str21, 176},
    {-1},
#line 50 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str23, 19},
#line 61 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str24, 30},
#line 67 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str25, 36},
    {-1},
#line 114 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str27, 83},
#line 38 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str28, 7},
#line 49 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str29, 18},
#line 39 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str30, 8},
#line 47 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str31, 16},
#line 41 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str32, 10},
#line 124 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str33, 93},
#line 80 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str34, 49},
#line 199 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str35, 168},
#line 130 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str36, 99},
#line 201 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str37, 170},
#line 112 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str38, 81},
#line 108 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str39, 77},
#line 204 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str40, 173},
#line 196 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str41, 165},
#line 123 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str42, 92},
#line 132 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str43, 101},
    {-1},
#line 107 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str45, 76},
#line 202 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str46, 171},
    {-1}, {-1},
#line 81 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str49, 50},
    {-1},
#line 186 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str51, 155},
#line 105 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str52, 74},
#line 185 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str53, 154},
#line 126 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str54, 95},
    {-1},
#line 64 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str56, 33},
#line 44 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str57, 13},
#line 93 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str58, 62},
#line 139 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str59, 108},
#line 129 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str60, 98},
    {-1},
#line 91 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str62, 60},
#line 192 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str63, 161},
#line 166 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str64, 135},
#line 144 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str65, 113},
#line 131 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str66, 100},
#line 31 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str67, 0},
#line 125 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str68, 94},
#line 198 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str69, 167},
#line 53 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str70, 22},
#line 163 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str71, 132},
#line 145 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str72, 114},
#line 45 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str73, 14},
#line 177 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str74, 146},
#line 58 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str75, 27},
#line 155 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str76, 124},
#line 118 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str77, 87},
#line 96 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str78, 65},
#line 197 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str79, 166},
#line 178 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str80, 147},
#line 83 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str81, 52},
#line 203 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str82, 172},
#line 167 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str83, 136},
#line 154 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str84, 123},
#line 121 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str85, 90},
#line 183 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str86, 152},
#line 94 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str87, 63},
#line 32 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str88, 1},
#line 143 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str89, 112},
#line 84 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str90, 53},
#line 75 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str91, 44},
#line 92 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str92, 61},
#line 77 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str93, 46},
#line 69 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str94, 38},
#line 62 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str95, 31},
#line 57 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str96, 26},
#line 137 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str97, 106},
#line 51 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str98, 20},
#line 195 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str99, 164},
#line 101 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str100, 70},
#line 150 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str101, 119},
#line 161 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str102, 130},
#line 78 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str103, 47},
#line 52 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str104, 21},
#line 106 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str105, 75},
#line 165 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str106, 134},
    {-1},
#line 189 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str108, 158},
#line 151 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str109, 120},
#line 153 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str110, 122},
#line 35 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str111, 4},
#line 103 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str112, 72},
#line 33 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str113, 2},
#line 37 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str114, 6},
#line 156 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str115, 125},
#line 170 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str116, 139},
#line 159 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str117, 128},
#line 110 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str118, 79},
#line 46 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str119, 15},
#line 72 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str120, 41},
#line 97 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str121, 66},
#line 146 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str122, 115},
#line 43 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str123, 12},
#line 66 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str124, 35},
#line 87 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str125, 56},
#line 171 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str126, 140},
#line 40 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str127, 9},
#line 180 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str128, 149},
#line 89 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str129, 58},
#line 79 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str130, 48},
#line 134 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str131, 103},
#line 122 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str132, 91},
#line 73 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str133, 42},
#line 116 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str134, 85},
#line 179 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str135, 148},
#line 133 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str136, 102},
#line 173 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str137, 142},
#line 152 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str138, 121},
#line 74 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str139, 43},
#line 85 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str140, 54},
#line 82 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str141, 51},
#line 158 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str142, 127},
#line 65 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str143, 34},
#line 175 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str144, 144},
#line 172 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str145, 141},
#line 182 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str146, 151},
#line 76 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str147, 45},
#line 115 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str148, 84},
#line 111 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str149, 80},
    {-1},
#line 59 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str151, 28},
#line 162 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str152, 131},
    {-1}, {-1},
#line 181 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str155, 150},
#line 157 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str156, 126},
#line 86 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str157, 55},
#line 42 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str158, 11},
#line 95 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str159, 64},
#line 54 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str160, 23},
#line 147 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str161, 116},
#line 174 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str162, 143},
#line 200 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str163, 169},
#line 113 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str164, 82},
#line 164 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str165, 133},
#line 100 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str166, 69},
#line 206 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str167, 175},
    {-1},
#line 127 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str169, 96},
#line 142 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str170, 111},
#line 187 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str171, 156},
#line 188 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str172, 157},
#line 128 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str173, 97},
#line 193 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str174, 162},
#line 60 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str175, 29},
    {-1},
#line 194 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str177, 163},
#line 70 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str178, 39},
#line 149 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str179, 118},
    {-1},
#line 140 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str181, 109},
#line 104 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str182, 73},
#line 68 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str183, 37},
#line 88 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str184, 57},
#line 90 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str185, 59},
#line 109 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str186, 78},
    {-1}, {-1},
#line 168 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str189, 137},
#line 34 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str190, 3},
    {-1},
#line 55 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str192, 24},
#line 63 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str193, 32},
#line 99 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str194, 68},
    {-1},
#line 120 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str196, 89},
#line 119 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str197, 88},
#line 136 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str198, 105},
    {-1},
#line 191 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str200, 160},
#line 141 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str201, 110},
#line 148 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str202, 117},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 135 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str209, 104},
#line 169 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str210, 138},
    {-1},
#line 71 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str212, 40},
    {-1}, {-1},
#line 205 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str215, 174},
#line 48 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str216, 17},
    {-1}, {-1}, {-1}, {-1},
#line 36 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str221, 5},
#line 184 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str222, 153},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 160 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str228, 129},
    {-1}, {-1},
#line 102 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str231, 71},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 117 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str242, 86},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 56 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str255, 25},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 176 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str262, 145},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 98 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str280, 67},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 138 "unictype/scripts_byname.gperf"
    {(int)(size_t)&((struct script_stringpool_t *)0)->script_stringpool_str326, 107}
  };
#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic pop
#endif

static const struct named_script *
uc_script_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = scripts_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int o = script_names[key].name;
          if (o >= 0)
            {
              register const char *s = o + script_stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &script_names[key];
            }
        }
    }
  return (struct named_script *) 0;
}
