# Character Types
前に文字Lがつかない整数の文字定数:
int型
単一の文字を含む整数の文字定数の値は整数として解釈される文字の整数。
文字aの数値は10進数形式で97,16進数形式で61。

ワイド文字定数:
文字Lがプレフィックスとして付けられている文字定数。
wchar_t型を持つ。
例
```
char    schar =  'x';   /* A character constant          */
wchar_t wchar = L'x';   /* A wide-character constant for
                            the same character           */
```
16ビット幅、拡張実行文字セットのメンバーを指定する。
これによって、char型で表すには大きすぎる文字をアルファベットで表現することができる。