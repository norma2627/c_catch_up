# extern Storage-Class Specifier
externストレージクラス指定子

ストレージクラス指定子externを使用して宣言された変数:
別のファイルで定義されている同じ名前の変数への参照となる。
外部レベル変数の定義を可視化するために使用される。
externとして宣言された変数自体に記憶域は割り当てられない。

例
```lang:C
// Source1.c

int i = 1;

// Source2. c

#include <stdio.h>

// Refers to the i that is defined in Source1.c:
extern int i;

void func(void);

int main()
{
    // Prints 1:
    printf_s("%d\n", i);
    func();
    return;
}

void func(void)
{
    // Address of global i assigned to pointer variable:
    static int *external_i = &i;

    // This definition of i hides the global i in Source.c:
    int i = 16;

    // Prints 16, 1:
    printf_s("%d\n%d\n", i, *external_i);
}
```
内部および外部レベルの宣言を示している。

変数iはSource1.c内で初期値1として定義される。
Source2.c内でのextern宣言は、このファイル内で'i'を参照できるようにする。

func関数では、staticポインター変数external_iを初期化するために、グローバル変数iのアドレスが使用される。
グローバル変数の有効期間がstatic。
プログラム実行中にアドレスが変わることがないので、これは機能する。
変数iはfuncのスコープ内で初期値16のローカル変数として定義される。
外部レベルiの値には影響しない。
ローカル変数用にその名前を使用することで隠される。
グローバルなiの値にアクセスするにはexternal_iポインターを使用するしかない。