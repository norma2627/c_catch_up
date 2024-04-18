# Generic selection
汎用選択

＿Genericキーワードを使用して、コンパイル時に引数の型に基づいて式を選択するコードを記述する。
呼び出される関数が引数の型に応じて選択されるC++のオーバーローディングに似ている。


## Syntax
generic-selection:
 _Generic(assignment-expression, assoc-list)

assoc-list:
 association
 assoc-list, association

association:
 type-name : assignment-expression
 default : assignment-expression


- assoc-listでは同じ型を風数回指定することはできない。
- assoc-listでは、列挙型やその列挙型の基になる型など、相互に互換性のある型を指定することはできない。
- 汎用選択に既定値がない場合、制御式の汎用結合リストは、互換性のある型名が1つだけ含まれている必要がある。

