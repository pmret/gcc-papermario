/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -p -j1 -i 1 -g -o -t -G -N is_reserved_word -k'1,3,$' ../c-parse.gperf  */

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

#line 1 "../c-parse.gperf"

/* Command-line: gperf -p -j1 -i 1 -g -o -t -N is_reserved_word -k1,3,$ c-parse.gperf  */ 
#line 4 "../c-parse.gperf"
struct resword { char *name; short token; enum rid rid; };

#define TOTAL_KEYWORDS 79
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 125
/* maximum key range = 120, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126,  10, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126,   4, 126,   1,  34,   8,
       25,   2,  46,  32,  39,   1, 126,  20,  49,   1,
       29,  19,   4, 126,  24,  16,  17,  45,  66,   1,
        5,   2,   3, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static struct resword wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
#line 44 "../c-parse.gperf"
    {"asm", ASM_KEYWORD, NORID},
    {""}, {""},
#line 84 "../c-parse.gperf"
    {"while", WHILE, NORID},
    {""},
#line 20 "../c-parse.gperf"
    {"__asm", ASM_KEYWORD, NORID},
    {""}, {""}, {""},
#line 31 "../c-parse.gperf"
    {"__inline", SCSPEC, RID_INLINE},
#line 21 "../c-parse.gperf"
    {"__asm__", ASM_KEYWORD, NORID},
#line 30 "../c-parse.gperf"
    {"__imag__", IMAGPART, NORID},
#line 22 "../c-parse.gperf"
    {"__attribute", ATTRIBUTE, NORID},
#line 32 "../c-parse.gperf"
    {"__inline__", SCSPEC, RID_INLINE},
#line 19 "../c-parse.gperf"
    {"__alignof__", ALIGNOF, NORID},
#line 34 "../c-parse.gperf"
    {"__iterator__", SCSPEC, RID_ITERATOR},
#line 23 "../c-parse.gperf"
    {"__attribute__", ATTRIBUTE, NORID},
#line 28 "../c-parse.gperf"
    {"__extension__", EXTENSION, NORID},
#line 55 "../c-parse.gperf"
    {"else", ELSE, NORID},
#line 27 "../c-parse.gperf"
    {"__const__", TYPE_QUAL, RID_CONST},
#line 24 "../c-parse.gperf"
    {"__complex", TYPESPEC, RID_COMPLEX},
#line 25 "../c-parse.gperf"
    {"__complex__", TYPESPEC, RID_COMPLEX},
#line 61 "../c-parse.gperf"
    {"id", OBJECTNAME, RID_ID},
#line 68 "../c-parse.gperf"
    {"oneway", TYPE_QUAL, RID_ONEWAY},
#line 48 "../c-parse.gperf"
    {"case", CASE, NORID},
#line 75 "../c-parse.gperf"
    {"static", SCSPEC, RID_STATIC},
#line 63 "../c-parse.gperf"
    {"in", TYPE_QUAL, RID_IN},
#line 8 "../c-parse.gperf"
    {"@defs", DEFS, NORID},
#line 39 "../c-parse.gperf"
    {"__signed__", TYPESPEC, RID_SIGNED},
#line 41 "../c-parse.gperf"
    {"__typeof__", TYPEOF, NORID},
#line 26 "../c-parse.gperf"
    {"__const", TYPE_QUAL, RID_CONST},
#line 49 "../c-parse.gperf"
    {"char", TYPESPEC, RID_CHAR},
#line 66 "../c-parse.gperf"
    {"int", TYPESPEC, RID_INT},
#line 33 "../c-parse.gperf"
    {"__iterator", SCSPEC, RID_ITERATOR},
#line 37 "../c-parse.gperf"
    {"__real__", REALPART, NORID},
#line 45 "../c-parse.gperf"
    {"auto", SCSPEC, RID_AUTO},
#line 64 "../c-parse.gperf"
    {"inout", TYPE_QUAL, RID_INOUT},
#line 29 "../c-parse.gperf"
    {"__imag", IMAGPART, NORID},
#line 13 "../c-parse.gperf"
    {"@private", PRIVATE, NORID},
#line 17 "../c-parse.gperf"
    {"@selector", SELECTOR, NORID},
#line 53 "../c-parse.gperf"
    {"do", DO, NORID},
#line 51 "../c-parse.gperf"
    {"continue", CONTINUE, NORID},
#line 9 "../c-parse.gperf"
    {"@encode", ENCODE, NORID},
#line 62 "../c-parse.gperf"
    {"if", IF, NORID},
#line 47 "../c-parse.gperf"
    {"bycopy", TYPE_QUAL, RID_BYCOPY},
#line 12 "../c-parse.gperf"
    {"@interface", INTERFACE, NORID},
#line 56 "../c-parse.gperf"
    {"enum", ENUM, NORID},
#line 38 "../c-parse.gperf"
    {"__signed", TYPESPEC, RID_SIGNED},
#line 57 "../c-parse.gperf"
    {"extern", SCSPEC, RID_EXTERN},
#line 11 "../c-parse.gperf"
    {"@implementation", IMPLEMENTATION, NORID},
#line 69 "../c-parse.gperf"
    {"out", TYPE_QUAL, RID_OUT},
#line 72 "../c-parse.gperf"
    {"short", TYPESPEC, RID_SHORT},
#line 65 "../c-parse.gperf"
    {"inline", SCSPEC, RID_INLINE},
#line 50 "../c-parse.gperf"
    {"const", TYPE_QUAL, RID_CONST},
#line 18 "../c-parse.gperf"
    {"__alignof", ALIGNOF, NORID},
#line 46 "../c-parse.gperf"
    {"break", BREAK, NORID},
#line 77 "../c-parse.gperf"
    {"switch", SWITCH, NORID},
#line 76 "../c-parse.gperf"
    {"struct", STRUCT, NORID},
    {""},
#line 7 "../c-parse.gperf"
    {"@compatibility_alias", ALIAS, NORID},
#line 35 "../c-parse.gperf"
    {"__label__", LABEL, NORID},
    {""},
#line 10 "../c-parse.gperf"
    {"@end", END, NORID},
#line 14 "../c-parse.gperf"
    {"@protected", PROTECTED, NORID},
#line 16 "../c-parse.gperf"
    {"@public", PUBLIC, NORID},
#line 74 "../c-parse.gperf"
    {"sizeof", SIZEOF, NORID},
#line 60 "../c-parse.gperf"
    {"goto", GOTO, NORID},
#line 79 "../c-parse.gperf"
    {"typeof", TYPEOF, NORID},
#line 78 "../c-parse.gperf"
    {"typedef", SCSPEC, RID_TYPEDEF},
#line 40 "../c-parse.gperf"
    {"__typeof", TYPEOF, NORID},
#line 71 "../c-parse.gperf"
    {"return", RETURN, NORID},
    {""},
#line 54 "../c-parse.gperf"
    {"double", TYPESPEC, RID_DOUBLE},
#line 73 "../c-parse.gperf"
    {"signed", TYPESPEC, RID_SIGNED},
#line 80 "../c-parse.gperf"
    {"union", UNION, NORID},
#line 6 "../c-parse.gperf"
    {"@class", CLASS, NORID},
#line 42 "../c-parse.gperf"
    {"__volatile", TYPE_QUAL, RID_VOLATILE},
#line 36 "../c-parse.gperf"
    {"__real", REALPART, NORID},
    {""}, {""},
#line 43 "../c-parse.gperf"
    {"__volatile__", TYPE_QUAL, RID_VOLATILE},
#line 58 "../c-parse.gperf"
    {"float", TYPESPEC, RID_FLOAT},
#line 70 "../c-parse.gperf"
    {"register", SCSPEC, RID_REGISTER},
    {""}, {""}, {""},
#line 15 "../c-parse.gperf"
    {"@protocol", PROTOCOL, NORID},
    {""},
#line 81 "../c-parse.gperf"
    {"unsigned", TYPESPEC, RID_UNSIGNED},
#line 52 "../c-parse.gperf"
    {"default", DEFAULT, NORID},
#line 82 "../c-parse.gperf"
    {"void", TYPESPEC, RID_VOID},
#line 59 "../c-parse.gperf"
    {"for", FOR, NORID},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 67 "../c-parse.gperf"
    {"long", TYPESPEC, RID_LONG},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 83 "../c-parse.gperf"
    {"volatile", TYPE_QUAL, RID_VOLATILE}
  };

#ifdef __GNUC__
inline
#endif
static struct resword *
is_reserved_word (str, len)
     register char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
