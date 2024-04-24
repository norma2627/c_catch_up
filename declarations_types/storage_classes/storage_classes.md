# C Storage Classes
Cストレージクラス

変数のストレージクラス:
- 項目がグローバルな有効期間を持つ
- ローカルな有効期間を持つ
どちらかを決定する

Cの有効期間:
"静的","自動"とよんでいる。

グローバルな有効期間を持つ項目:
プログラムの実行を通して実在し、値が含まれる。

すべての関数:
グローバル有効関数がある。

ローカル有効期間を持つ自動変数、変数:
自分が定義されているブロックに実行制御が渡される度に新しいストレージが割り当てられる。
実行から返るとき、変数には有効な値が含まれない。

ストレージクラス指定子:
storage-class-specifier:
 auto
 register
 static
 extern
 typedef
 __declspec (extended-decl-modifier-seq) /* Microsoft 固有の仕様 */

__declspecを除いて、宣言のdeclaration-specifierでは1個のstorage-class-specifierのみ使用できる。
ストレージクラスの指定が行われない場合、ブロック内の宣言により自動オブジェクトが作成される。

auto,register指定子で宣言された項目にはローカルの有効期間がある。
static,extern指定子で宣言された項目にはグローバルの有効期間がある。

typedef,__declspecは他の4つのstorage-class-specifier終端要素とは意味が異なる。

ソースファイル内の変数と関数宣言の配置:
ストレージクラスと可視性にも影響する。
すべての関数定義の外側の宣言:
外部レベルで表示される。
関数定義内の宣言:
内部レベルで表示される。

各ストレージクラス指定子の厳密な意味:
- 宣言が現れるのが、外部レベルか内部レベルか
- 宣言された項目が、変数または関数であるかどうか