# C Character Constants
文字定数:
表現できる文字セットの1文字を単一引用符('')で囲むことによって作成される。
文字定数には、実行文字セットの文字を表すために使用される。

## Syntax
character-constant:
 ' c-char-sequence '
 L' c-char-sequence '

c-char-sequence:
 c-char
 c-char-sequence c-char

c-char:
 単一引用符 (')、円記号 (\)、または改行文字を除くソース文字セットのメンバー
 escape-sequence

escape-sequence:
 simple-escape-sequence
 octal-escape-sequence
 hexadecimal-escape-sequence

simple-escape-sequence: 次のいずれか
 \a \b \f \n \r \t \v
 \' \" \\ \?

octal-escape-sequence:
 \ octal-digit
 \ octal-digit octal-digit
 \ octal-digit octal-digit octal-digit

hexadecimal-escape-sequence:
 \x hexadecimal-digit
 hexadecimal-escape-sequence hexadecimal-digit