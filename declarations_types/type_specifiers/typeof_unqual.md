# typeof_unqual, __typeof_unqual__
※C23標準の新機能である演算子
typeof_unqual disカード後の式の型を返す単項演算子。

const, volatile, restrict, 型宣言, 型キャスト, 型チェックなどで使用できる。
変数、関数、任意のC式の型を取得する。


__typeof_unqual__キーワード:
※MS固有の拡張機能typeof_unqualである。
キーワード: __typeof_unqual__


typeof_unqualの構文:
```lang:C
typeof_unqual(type)
typeof_unqual(constant-expression)
__typeof__unqual(constant-expression)
```

typeof_unqualの例:
```lang:C
// Compile with /std:clatest and /experimental:c11atomics
#include <stdatomic.h>

// A function that takes an atomic int pointer, but uses a non-atomic copy of the value
void func(_Atomic(int) * pAtomic)
{
    typeof_unqual(*pAtomic) local = *pAtomic;

    // Use local non-atomic copy of value
}

int main()
{
    int* const cpVar1 = 2;
    typeof_unqual(cpVar1) pVar2 = 3;
    pVar2 = 4; // no error because pi is not const. cpVar1 = 4 would be an error.

    _Atomic(int)i = 42;
    func(&i);

    return 0;
}
```
typeof_unqual()を使用するが、使用する場合は__typeof_unqual__の動作は同じ。
