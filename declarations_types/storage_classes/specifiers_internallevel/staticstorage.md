# static Storage-Class Specifier
staticストレージクラス指定子

staticストレージクラス指定子を仕様して内部レベルで宣言された変数:
グローバルな有効期間がある。
宣言されたブロック内でしか参照できない。

定数文字列の場合:
staticを使用すると、頻繁に呼び出される関数内の頻度の高い初期化のオーバーヘッドを軽減するのに役立つ。

## Remarks
static変数を明示的に初期化しない場合は、既定で0に初期化される。
関数内では、staticによってストレージが割り当てられ、定義として動作する。
内部静的変数は、1つの関数にのみプライベートの永続ストレージ変数を提供する。