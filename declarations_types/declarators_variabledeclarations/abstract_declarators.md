# Abstract Declarators
C抽象宣言子

1つ以上のポインター、配列、関数修飾子で構成される、識別子のない宣言子。

ポインター修飾子(*):
宣言内で常に識別子の前にある。
配列修飾子と関数修飾子は識別子の後ろにある。
抽象宣言子内のどこに識別子があると予想されているかを判断し、宣言子を解釈できる。

typedefを仕様して宣言しを簡素化できる。


### 抽象宣言子
```
int *         // The type name for a pointer to type int:

int *[3]      // An array of three pointers to int

int (*) [5]   // A pointer to an array of five int

int *()       // A function with no parameter specification
              // returning a pointer to int

// A pointer to a function taking no arguments and
// returning an int

int (*) ( void )

// An array of an unspecified number of constant pointers to
// functions each with one parameter that has type unsigned int
// and an unspecified number of other parameters returning an int

int (*const []) ( unsigned int, ... )
```