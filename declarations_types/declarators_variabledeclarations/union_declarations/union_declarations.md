# union Declarations
共用体の宣言

一連の変数の値、共用体に名前を付けるタグ(オプション)を指定する。
変数の値へ共用体の"メンバー"と呼ばれ、異なる型を指定できる。
他の言語におけるバリアントレコードに似ている。


## Syntax
struct-or-union-specifier:
 struct-or-unionidentifieropt{struct-declaration-list}
 struct-or-union identifier

struct-or-union:
 struct
 union

struct-declaration-list:
 struct-declaration
 struct-declaration-list struct-declaration

共用体の内容は、次のように定義されます

struct-declaration:
 specifier-qualifier-list struct-declarator-list ;

specifier-qualifier-list:
 type-specifierspecifier-qualifier-listopt
 type-qualifierspecifier-qualifier-listopt

struct-declarator-list:
 struct-declarator
 struct-declarator-list , struct-declarator

union型の変数:
その型で定義されている値のいずれか1つを保存する。
同じ規則が構造体と共有体の宣言を制御する。
共用体には、ビットフィールドも設定できる。

共用体のメンバー:
不完全な型、void型、関数型を持つことができない。
メンバーを共用体のインスタンスにすることはできない。宣言されている共用体型へのポインターにすることはできる。
