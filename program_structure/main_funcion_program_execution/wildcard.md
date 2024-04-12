# Expanding wildcard arguments
ワイルドカードの引数の展開
※ワイルドカード引数の展開はmicrosoft固有の機能

cプログラムを実行する際、2つのワイルドカード(?,*)を使用して、コマンドラインでファイル名とパスの引数を指定できる。

ワイルドカードはコマンドライン引数では展開されない。
setargv.ovj,wsetargv.objファイルとリンクさせることで、通常の引数ベクターargvの読み込みルーチンをワイルドカードを展開するバージョンと置き換えることができる。

setargv.obj, setargv.objとリンクするには、/linkオプションを使用する。
例:
```
cl example.c /link setargv.obj
```