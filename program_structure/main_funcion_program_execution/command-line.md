# Parsing C command-line arguments
Cのコマンドライン引数の解析
※microsoft固有の仕様


microsoft C スタートアップコード:
オペレーティングシステムのコマンドラインで指定された引数を解釈する場合に、次の規則を使用する。
- 引数は空白文字(スペース、タブのいずれか)で区切られる
- 最初の引数(argv[0])は、特別に処理される。
 - プログラム名を表す
- 二重引用符で囲まれた文字列は、空白文字が含まれいるかどうかに関わらずに1つの引数として解釈される。
- 円記号を前に付けた二重引用符(\")は、リテラルの二重引用符文字として解釈される。
- 二重引用符の直前にある円記号以外は、円記号として文字通り解釈される。
- 二重引用符の直前に円記号が偶数個と、円記号のペア(\\)ごとに1個の円記号(\)がargv配列に配列される。
- 基数個の円記号の後に二重引用符がある場合は、円記号のペアごとに1個の円記号がargv配列に配置される。二重引用符は残りの円記号によってエスケープシーケンスとして解釈され、リテラルの二重引用符(")がargvに配置される。


コマンドライン引数でargvに渡される解釈された結果:
コマンド ライン入力 	argv[1] 	argv[2] 	argv[3]
"a b c" d e 	　　　　a b c 	　　d 	　　　　e
"ab\"c" "\\" d 	　　　　ab"c 	　　\ 	　　　　d
a\\\b d"e f"g h 	　　a\\\b 	　　de fg 	　　h
a\\\"b c d 	　　　　　　a\"b 	　　c 	　　　　d
a\\\\"b c" d e 	　　　　a\\b c 	　　d 	　　　　e
a"b"" c d 	　　　　　　ab" c d 		


[コード例](ex1.c)
プログラムの出力
```
Command-line arguments:
  argv[0]   C:\MSC\ARGS.EXE

Environment variables:
  COMSPEC=C:\NT\SYSTEM32\CMD.EXE
  PATH=c:\nt;c:\binb;c:\binr;c:\nt\system32;c:\word;c:\help;c:\msc;c:\;
  PROMPT=[$p]
  TEMP=c:\tmp
  TMP=c:\tmp
  EDITORS=c:\binr
  WINDIR=c:\nt
```