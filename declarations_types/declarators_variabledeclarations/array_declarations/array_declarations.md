# Array Declarations
配列の宣言

配列宣言:
配列に名前をつけて、その要素の型を指定する。
配列の要素数も定義できる。

配列の変数:
配列要素の型へのポインターと見なされる


## Synatax

declaration:
 declaration-specifiersinit-declarator-listopt;

init-declarator-list:
 init-declarator
 init-declarator-list , init-declarator

init-declarator:
 declarator
 declarator = initializer

declarator:
 pointeroptdirect-declarator

direct-declarator:
 direct-declarator[constant-expressionopt]


constant-expression:
省略可能であり、構文には以下の2つの形式がある。


### 配列宣言の例
```lang:c
float matrix[10][15];
```
floatという2次元配列には150個の要素があり、それぞれがfloat型。

```lang:c
struct {
    float x, y;
} complex[100];
```
構造体の配列の宣言。
100個の要素がある。各要素は2つのメンバーを含む構造体。

```lang:c
extern char *name[];
```
charへのポインターの配列の型と名前を宣言している。
nameの実際の定義は他の場所で発生する。

