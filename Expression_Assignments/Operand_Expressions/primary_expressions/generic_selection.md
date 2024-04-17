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

