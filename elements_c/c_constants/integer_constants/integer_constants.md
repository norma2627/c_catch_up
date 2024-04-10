# C Integer Constants
整数定数:
整数値を表す10進数(基数10)、8進数(基数8)、16進数(基数16)。
変更できない整数値を表すには、整数定数を使用する。

## Syntax
integer-constant:
 decimal-constantinteger-suffixopt
 octal-constantinteger-suffixopt
 hexadecimal-constantinteger-suffixopt

decimal-constant:
 nonzero-digit
 decimal-constant digit

octal-constant:
 0
 octal-constant octal-digit

hexadecimal-constant:
 hexadecimal-prefix hexadecimal-digit
 hexadecimal-constant hexadecimal-digit

hexadecimal-prefix: 次のいずれか
 0x 0X

nonzero-digit: 次のいずれか
 1 2 3 4 5 6 7 8 9

octal-digit: 次のいずれか
 0 1 2 3 4 5 6 7

hexadecimal-digit: 次のいずれか
 0 1 2 3 4 5 6 7 8 9
 a b c d e f
 A B C D E F

integer-suffix:
 unsigned-suffixlong-suffixopt
 unsigned-suffix long-long-suffix
 unsigned-suffix 64-bit-integer-suffix
 long-suffixunsigned-suffixopt
 long-long-suffixunsigned-suffixopt
 64-bit-integer-suffix

unsigned-suffix: 次のいずれか
 u U

long-suffix: 次のいずれか
 l L

long-long-suffix: 次のいずれか
 ll LL

64-bit-integer-suffix: 次のいずれか
 i64 I64

i64 と I64 サフィックスは Microsoft 固有。


整数定数:
負符号-が前にない場合、整数になる。
負符号は、単項算術否定演算子として解釈される。
0x,0Xで始まる場合: 16進数
0で始まる場合: 8進数
それ以外: 10進数

整数定数の例(すべて同じ値)
```lang:c
28
0x1C   /* = Hexadecimal representation for decimal 28 */
034    /* = Octal representation for decimal 28 */
```

空白文字で整数定数の数字を分離することはできない。
```lang:c
/* Decimal Constants */
    int                 dec_int    = 28;
    unsigned            dec_uint   = 4000000024u;
    long                dec_long   = 2000000022l;
    unsigned long       dec_ulong  = 4000000000ul;
    long long           dec_llong  = 9000000000LL;
    unsigned long long  dec_ullong = 900000000001ull;
    __int64             dec_i64    = 9000000000002I64;
    unsigned __int64    dec_ui64   = 90000000000004ui64;

    /* Octal Constants */
    int                 oct_int    = 024;
    unsigned            oct_uint   = 04000000024u;
    long                oct_long   = 02000000022l;
    unsigned long       oct_ulong  = 04000000000UL;
    long long           oct_llong  = 044000000000000ll;
    unsigned long long  oct_ullong = 044400000000000001Ull;
    __int64             oct_i64    = 04444000000000000002i64;
    unsigned __int64    oct_ui64   = 04444000000000000004uI64;

    /* Hexadecimal Constants */
    int                 hex_int    = 0x2a;
    unsigned            hex_uint   = 0XA0000024u;
    long                hex_long   = 0x20000022l;
    unsigned long       hex_ulong  = 0XA0000021uL;
    long long           hex_llong  = 0x8a000000000000ll;
    unsigned long long  hex_ullong = 0x8A40000000000010uLL;
    __int64             hex_i64    = 0x4a44000000000020I64;
    unsigned __int64    hex_ui64   = 0x8a44000000000040Ui64;
```