# typeof __typeof__
※C23標準の新機能である演算子
typeof式の型を返す単項演算子。

型宣言、型キャスト、型チェックなどで使用できる。
変数、関数、任意のC式の型を取得する。


__typeof__キーワード:
※MS固有の拡張機能typeofである。
キーワードは__typeof__


typeofの構文:
```lang:C
typeof(type)
typeof(constant-expression)
__typeof__(constant-expression)
```

typeofの例:
```lang:C
// Compile with /std:clatest

#include <stdio.h>

double func()
{
    3.14;
}

#define POINTER(T) typeof(T*)

int main()
{
    auto a = func(); // the type for a (double) is inferred, but requires initialization at point of declaration
    typeof(func()) b; // the type for b is double, but didn't have to be initialized at point of declaration

    // Some declarations using typeof
    POINTER(int) p1 = NULL; // p1 is int*

    typeof(double(void))* pFunc = func; // pFunc is a pointer to a function that takes no arguments and returns a double
    printf("pFunc() returns %f\n", pFunc());

    return 0;
}
```

typeof()を使用しているが、__typeof__の動作は同じ。