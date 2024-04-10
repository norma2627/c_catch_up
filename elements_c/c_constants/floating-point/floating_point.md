# C Floating-Pont Constants
浮動小数点定数:
符号付き実数を表す10進数。
符号付き実数の表現には、整数部分、小数部分、指数が含まれる。
変更できない浮動小数点値を表すには、浮動小数点定数を使用する。

## Syntax
floating-point-constant:
 fractional-constantexponent-partoptfloating-suffixopt
 digit-sequenceexponent-partfloating-suffixopt

fractional-constant:
 digit-sequenceopt.digit-sequence
 digit-sequence.

exponent-part:
 esignoptdigit-sequence
 Esignoptdigit-sequence

sign: 次のいずれか
 + -

digit-sequence:
 digit
 digit-sequence digit

floating-suffix: 次のいずれか
 f l F L


小数点の前の桁(値の整数の部分),小数点の後の桁(小数の部分):　
どちらかを省略することは可能、両方を省略することはできない。
小数点は、指数部分を含めた場合のみ省略できる。
空白文字で定数の数値または文字を分離することはできない。


浮動小数点定数と式のフォーム:
```lang:c
15.75
1.575E1   /* = 15.75   */
1575e-2   /* = 15.75   */
-2.5e-3   /* = -0.0025 */
25E-4     /* =  0.0025 */
```

浮動小数点定数:
負符号(-)が前にない限り、正の値。
負符号は単項算術否定演算子として扱われる。

浮動小数点定数の型:
float,double,long double

f,F,l,Lのサフィックスのない浮動小数点の型:
double
f,Fがサフィックスの場合の定数の型:
float
末尾に文字l,Lがついている場合:
long double
```lang:c
10.0L  /* Has type long double  */
10.0   /* Has type double       */
10.0F  /* Has type float        */
```

