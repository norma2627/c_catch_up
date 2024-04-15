# C Type Spevifiers
C型指定子

宣言内の型指定子:
変数または関数宣言の型を定義する。


## Syntax
type-specifier: voidcharshortintlongfloatdoublesignedunsignedstruct-or-union-specifierenum-specifiertypedef-name


signed char, signed int, signed short int, signed long int型とそれに対応するunsigned型およびenumは整数型と呼ばれる。

float,double,long double型指定子:
浮動、浮動小数点型と呼ばれる。

変数宣言または関数宣言:
整数型、浮動小数点型の指定子を指定できる。


省略可能なキーワード:
signed,unsigned: enum以外の整数型の前または後に置くことができる。
型指定子として単独で使用することもできる。
→signed int, unsigned intとして解釈される。
※単独で使用した場合: int,signedであると見なされる。
キーワードlong,shortはlong int,short intであると見なされる。

列挙型:
基本的な型と見なされる。


キーワードvoid:
3つの使用方法がある。
関数の戻り値を指定する、引数を取らない関数の引数型リストを指定する、指定されていない型へのポインターを指定する。

void型を使用して、値を返さない関数を宣言するか、未指定の型へのポインターを宣言することができる。


