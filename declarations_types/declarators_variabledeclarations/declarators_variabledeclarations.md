# Declatators and variable declarations
宣言子と変数の宣言

変数の種類 	　　　説明
単純変数 	　　　整数型または浮動小数点型の単一値変数
配列 	　　　　　同じ型の要素のコレクションで構成される変数
ポインター 	　　　他の変数をポイントし、値の代わりに変数の場所を (アドレスの形式で) 含む変数
列挙変数 	　　　一連の名前付き整数定数の 1 つの値を保持する整数型の単純変数
構造体 	　　　　　異なる型を持つことができる値のコレクションで構成される変数
共用体 　　　　	　同じストレージ領域を占有する異なる型の複数の値で構成される変数



宣言子: プログラムに組み込む名前を指定する宣言の部分
*(ポインター)などの修飾子とMSの呼び出し規則キーワードを含めることができる。



## Syntax
declarator:
 pointeroptdirect-declarator

direct-declarator:
 identifier
 ( declarator )
 direct-declarator[constant-expressionopt]
 direct-declarator ( parameter-type-list )
 direct-declarator(identifier-listopt)

pointer:
 *type-qualifier-listopt
 *type-qualifier-listoptpointer

type-qualifier-list:
 type-qualifier
 type-qualifier-list type-qualifier


宣言子が修飾されたいない識別子で構成される場合:
宣言される項目は基本型を持つ。

*(アスタリスク)が識別子の左側にある場合:
型はポインター型に変更される。

識別子の後ろに角かこ([])が続く場合:
型は配列型に変更される。
識別子の後ろにかっこが続く場合、型は関数型に変更される。


各宣言:
1つ以上の識別子を宣言する。
宣言子で完全な宣言をするには、型指定子を含める必要がる。

型指定子:
配列型の要素の型、ポインター型によってアドレス指定されるオブジェクトの型、または関数の戻り値の型を示す。


宣言型の簡単な形式:
```lang:C
int list[20]; // Declares an array of 20 int values named list
char *cp;     // Declares a pointer to a char value
double func( void ); // Declares a function named func, with no
                     // arguments, that returns a double value
int *aptr[10]; // Declares an array of 10 pointers
```