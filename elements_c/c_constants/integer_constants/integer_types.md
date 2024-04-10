# Integer Types
各整数定数:
その値と表現方法に基づいて型が割り当てられる。

long型にする場合:
定数の末尾にl,Lを追加する。

unsigned型にする場合:
値にu,Uを追加する。

※小文字のlは数字の1と区別しにくいので使用しないようにする。

long整数定数の形式の例:
```lang:c
/* Long decimal constants */
10L
79L

/* Long octal constants */
012L
0115L

/* Long hexadecimal constants */
0xaL or 0xAL
0X4fL or 0x4FL

/* Unsigned long decimal constant */
776745UL
778866LU
```

定数の割り当てる型:
その定数が表す値に依存する。
定数の値は、その型で表現できる値範囲内にあることが条件となる。
式で定数を使用する場合、マイナス符号(-)を適用する場合は、次のとおり。
- サフィックスのない8進定数または16進定数: int, unsigned int,
long int, unsigned long int
- l, Lサフィックスが指定された定数に割り当てられる型: long int, unsigned long int
- u, U, l, Lサフィックスが指定された定数に割り当てられる型: unsigned long int

