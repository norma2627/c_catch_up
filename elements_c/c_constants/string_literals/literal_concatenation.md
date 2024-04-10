# String Literal Concatenation
文字列リテラルの連結: 
複数の行にわたる文字列リテラルを作成するとき、2つの文字列を連結できる。
円記号を入力してから、Enterキーを押す。
円記号を入力すると、コンパイラは皇族の改行文字を無視する。

例: 次に示す例1の文字列リテラルと例2の文字列は同じ
例１
```
"Long strings can be bro\
ken into two or more pieces."
```
例2
```
"Long strings can be broken into two or more pieces."
```

文字列の連結:
円記号に続けて改行文字を使用することで、どこでも使用できる。
1行より長い文字列を入力できる。

文字列リテラル内で改行を強制する場合:
文字列内の改行位置で、改行エスケープシーケンス(\n)を次のように入力する。
```
"Enter a number between 1 and 100\nOr press Return"
```

文字列はソースコード内の任意の列から開始できる。
長い文字列は次の行の任意の列で続行できるため、ソースコードが読みやすくなるように文字列を配置できる。
その場合も、出力時の画面上の表現は影響を受けない。
```lang:C
printf_s ( "This is the first half of the string, "
           "this is the second half ") ;
```


空白のみで区切られた2つの文字列リテラルとして初期化された文字列ポインター: 
1つの文字列として格納される。
例
```lang:c
char *string = "This is the first half of the string, "
               "this is the second half";

printf_s( "%s" , string ) ;
```
隣接する文字列リテラル、または隣接するワイド文字列の任意のシーケンスで指定されたマルチバイト文字シーケンスは、変換フェーズ6で結合され、単一のマルチバイト文字シーケンスになる。
※実行時に文字列リテラルの変更を許可するようにプログラムをデザインしてはいけない。

