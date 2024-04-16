# Initializing Aggregate Types
集約型の初期化

集約型:
構造体、共有体、配列型。
集約型に集約型のメンバーが含まれる場合、初期化の規則が再帰的に適用される。

## Syntax
initializer:
 {initializer-list} /* 集計初期化用 */
 { initializer-list , }

initializer-list:
 initializer
 initializer-list , initializer


initializer-list:
コンマで区切った初期化リスト。
リストの初期化子は定数式、初期化子リスト。
初期化子リストは入れ子にできる。
集約型の集約メンバーを初期化する場合に便利。
自動識別子の初期化子が単一の式である場合は、定数式である必要はない。
識別子に割り当てられるための適切な型を持っているだけでかまわない。

