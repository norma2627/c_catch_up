# C Bit Field
Cビットフィールド

##  ビットフィールド
構造体宣言子を指定されたビット数にすることができる。
整数型として解釈される。

ビットフィールドの長さ:
コロンによってフィールド名の宣言子から設定される。


## Syntax

struct-declarator:
 declarator
 type-specifierdeclaratoropt:constant-expression

constant-expression:
フィールドの幅を指定する。

declaratorのtype-specifier: 
unsigned int, signed int, intである必要がある。

constrant-expression:
負でない整数値である必要がある。
値がゼロの場合: 宣言にはdeclaratorがない。
※ビットフィールド、ビットフィールドへのポインター、ビットフィールドを返す配列は使用できない。

名前のないビットフィールド:
参照できない。実行時の内容は予測できない。
アラインメントのためにダミーフィールドとして使用できる。

幅が0として指定された名前のないビットフィールド: 
struct-declaration-list内でそれに続くメンバーのストレージがint境界で開始されることを保証する。

ビットフィールドの値:
基になる型のサイズ以下である必要がない。

