# Source Files and Source Programs
ソースファイルとソースプログラム:

ソースプログラム:
1つまたは複数の"ソースファイル"または"翻訳単位"に分割できる。
※翻訳単位: コンパイラへの入力のことを指す。

## Syntax
translation-unit:
 external-declaration
 translation-unit external-declaration

external-declaration:
 function-definition
 declaration


翻訳単位の構成要素:
関数定義および識別子宣言を含む外部宣言。

宣言と定義:
ソースファイル、ヘッダーファイル、ライブラリなどプログラムが必要とするファイルに含めることができる。
各翻訳単位をコンパイルし結果のオブジェクトファイルをリンクしてプログラムを作成する必要がある。

ソースプログラム:
ディレクティブ、プラグマ、宣言、定義、ステートメントブロック、および関数のコレクション。
※MS Cプログラムの有効な構成要素であるために、構文にしたがう必要がある。

