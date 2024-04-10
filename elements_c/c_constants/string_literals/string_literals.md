# C string Literals
文字列リテラル:
二重引用符("")で囲まれたソース文字セットのもじのシーケンス。
まとめてnullで終わる文字列を形成する、文字のシーケンスを表すために使用される。
ワイド文字列リテラルの前には、常に文字Lを付ける必要がある。

## Syntax
string-literal:
 "s-char-sequenceopt"
 L"s-char-sequenceopt"

s-char-sequence:
 s-char
 s-char-sequence s-char

s-char:
 二重引用符 (")、円記号 (\)、改行文字を除くソース文字セットの任意のメンバー
 escape-sequence


## Remarks
シンプルな文字列リテラルの例:
```lang:c
char *amessage = "This is a string literal.";
```

エスケープコードは文字列リテラルで有効。
文字列リテラル内での二重引用符の表し方:
エスケープシーケンス\"を使用する。
単一引用符(')はエスケープシーケンスを使用せずに表すことができる。
円記号(\)を使用するには、直後に2目の円記号を付ける(\\)必要がある。
行の末尾にあるバックスラッシュは常に行連結文字として解釈される。

