# Constant Expressions
C定数式

定数式:
実行時ではなくコンパイル時に評価される。
定数を使用できるすべての場所で使用できる。
その型の表現可能な値の範囲にある対数として評価される必要がある。

定数式のオペランド:
整数定数、文字定数、浮動点少数定数、列挙定数、型キャスト、sizeof式、他の定数式にすることができる。


## Syntax
constant-expression:
 conditional-expression

conditional-expression:
 logical-OR-expression
 logical-OR-expression ? expression : conditional-expression

expression:
 assignment-expression
 expression , assignment-expression

assignment-expression:
 conditional-expression
 unary-expression assignment-operator assignment-expression

assignment-operator: 次のいずれか
 = *= /= %= += -= <<= >>= &= ^= |=

構造体宣言子、列挙子、直接宣言子、直接抽象宣言子、ラベル付きステートメントの非終端要素：
constant-ecpression非終端要素が含まれる。

