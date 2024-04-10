# main function and program execution
main関数とプログラム実行

すべてのCプログラム:
mainという名前をつける必要のある主要な関数がある。
main関数は、プログラム実行の開始点として動作する。
プログラム内の他の関数へ呼び出しを指示することによって、プログラムの実行を制御する。

main関数が行うこと:
- inlineとして宣言することはできない。
- staticとして宣言することはできない。
- そのアドレスを取得することはできない。
- プログラムから呼び出すことはできない。


## The main function signature
main関数シグネチャ
main関数:
言語に組み込まれているため、宣言を持たない。
mainの宣言構文
```lang:C
int main( void );
int main( int argc, char *argv[ ] );
int main( int argc, char *argv[ ], char *envp[ ] );
```
main関数は、暗黙的に宣言される。

## Remarks
ソースプログラム内の関数:
1つ以上の特定のタスクを実行する。

