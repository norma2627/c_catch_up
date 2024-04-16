# Interpreting More Complex Declarators
より複雑な宣言子の解釈


複雑な宣言子:
任意の宣言子をかっこで囲むことで特定の解釈を指定できる。


複合宣言子:
複雑の配列、ポインター、関数修飾子によって修飾された識別子。

1つのID:
配列、ポインター、関数修飾子の様々な組み合わせを適用できる。



### 使用例
```lang:c
int *var[5]; /* Array of pointers to int values */
```
配列修飾子はポインター修飾子よりも高い優先順位を持つ。
varは配列として宣言される。
ポインター修飾子は配列要素の型に適用される。
配列要素: int値へのポインター

```lang:c
int (*var)[5]; /* Pointer to array of int values */
```
varの定義によって、配列修飾子よりも高い優先順位がポインター修飾子に与えられ、varは5つのint値の配列へのポインターとして宣言される。

```lang:c
long *var( long, long ); /* Function returning pointer to long */
```
関数の修飾子はポインターの修飾子よりも優先順位が高い。
varのこの宣言はlong値を受け入れるように宣言する。

```lang:c
long (*var)( long, long ); /* Pointer to function returning long */
```
かっこによって関数の修飾子よりも高い優先順位がポインターの修飾子に与えられ、varはlong値を返す関数へのポインターとして宣言される。
関数は2個のlong引数を受け取る。

```lang:c
struct both       /* Array of pointers to functions */
{                 /*   returning structures         */
    int a;
    char b;
} ( *var[5] )( struct both, struct both );
```
配列の要素: 関数にすることはできない。
宣言:関数へのポインターの配列を宣言する方法を示す。
varは2つのメンバーを持つ構造体を返す関数へのポインターを5つ含む配列として宣言される。
関数の引数: 同じ構造体型bothを持つ2つの構造体として宣言される。

```lang:c
unsigned int *(* const *name[5][10] ) ( void );
```
name配列には、多次元配列で構成された50個の要素がある。
要素は、定数のポインターへのポインター。
定数ポインター:符号なしの型へのポインターを返す、パラメーターを持たない関数をポイントする。
