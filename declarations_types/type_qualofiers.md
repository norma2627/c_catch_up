# Type Qualifiers
型修飾子

型修飾子:
"const型修飾子"、"volatile型修飾子"
2つのうちいずれかの特性を識別子に割り当てられる。

conat型修飾子: 変更不可能なオブジェクトを宣言。
volatitile型修飾子: 同時実行されるスレッドなど、そのプログラムの制御範囲以外の要素によって値を変更できる項目を宣言する。

型修飾子: const, restrict, volatileは宣言内で1回だけ使用できる。
※型修飾子は型指定子との併用が可能。複数項目宣言で、最初のコンマの後にこれらを指定することはできない。


有効な宣言
```lang:C
typedef volatile int VI;
const int ci;
```

無効な宣言
```lang:C
typedef int *i, volatile *vi;
float f, const cf;
```

型修飾子が意味を持つ:
式の左辺値として識別子にアクセスする場合のみ
