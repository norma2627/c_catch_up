# C ectended storage-class sttributes
Cの拡張ストレージクラス属性
※MS固有の仕様

拡張属性構文:
MS固有のC言語拡張機能を簡略化し標準化する。
拡張属性構文を使用するストレージクラス属性:
thread,naked,dllimport,dllexportがある。

拡張属性構文:ストレージクラス情報を指定する場合__declaspecキーワードを使用する。
特定の型のインスタンスをMS固有のストレージクラス属性と共に格納することを指定する。
ストレージクラス修飾子: static,externキーワードがある。


## Syntax
storage-class-specifier:
 __declspec (extended-decl-modifier-seq) /* Microsoft 固有の仕様 */

extended-decl-modifier-seq: /* Microsoft 固有の仕様 */
 extended-decl-modifieropt
 extended-decl-modifier-seq extended-decl-modifier

extended-decl-modifier: /* Microsoft 固有の仕様 */
 thread
 naked
 dllimport
 dllexport

空白は、宣言修飾子を区切る。
extended-decl-modifier-seqは空白にできる。
__declspecによる影響はない。

thread, naked,dllimport,dllexportストレージクラス属性:
適用先のデータまたは関数の宣言のプロパテでしかない。
関数自体の型属性は再定義しない。
thread属性はデータのみ影響を与える。
naked属性は関数のみ影響を与える。
dllimport,dllexport属性は関数とデータに影響を与える。