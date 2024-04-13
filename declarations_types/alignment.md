# Alignment(C11)
アライメント

Cの低レベルの機能:
ハードウェアアーキテクチャを最大活用するためにメモリ内のオブジェクトの正確なアライメントを指定できる機能。

データがそのデータサイズの倍数であるアドレスに格納されている:
CPUの読み取りと書き込みの機能が向上する。
例:4バイトの整数が4の倍数であるアドレスに格納されているとより効率的にアクセスできる。
データがアラインされたいないとCPUではデータにアクセスするためにより多くのアドレス計算処理を行う。

コンパイラがサイズに基づいてデータがアラインされる。
→charは1バイト境界、shortは2バイト境界、int,long,floatは4バイト境界、doubleは8バイト境界。

頻繁に使用されるデータをプロセッサのキャッシュラインのサイズにアラインする→キャッシュパフォーマンスを改善できる。
例:サイズが32バイト未満の構造体を定義
32バイトのアライメントを使用して、構造体のすべてのインスタンスが効率的にキャッシュされるようにするとよい。
※アライメントについて心配する必要はない。

コンパイラ:
通常、ターゲットプロセッサとデータのサイズに基づいて、自然な境界にデータをアラインする。
データは、32ビットプロセッサでは最大4バイト境界、64ビットプロセッサでは最大で8バイト境界にアラインされる。
データ構造にカスタムアラインメントを指定することで、パフォーマンスの向上やメモリの節約を実現できる。

_Alignof:
型または変数の適切なアラインメントを取得したり、_Alignasを使用して、変数またはユーザー定義型のカスタムアラインメントを指定したりする。

支援マクロalignofと<stdalign.h>alignasは、それぞれ_Alignofと_Alignasに直接マップされる。
→C++で使用されるキーワードと一致する。
2つの言語間でコードを共有うる場合は、コードの移植性を確保するためにCのキーワードではなく、そのマクロを使用すると役立つことがある。


## alignsと＿Alignas
alignas,_Alignas:
変数またはユーザー定義型のカスタムアライメントを指定する。
構造体、共有体、列挙型、変数に適用できる。

alignasの構文:
```lang:C
alignas(type)
alignas(constant-expression)
_Alignas(type)
_Alignas(constant-expression)
```

_Alignas:
register指定子で宣言されたtypedef、ビットフィールド、関数、関数パラメーター、オブジェクトの宣言では使用できない。
１、２、４、８、１６など2の累乗であるアラインメントを指定する。
型のサイズよりも小さい値は使用してはいけない。


structとunion型のアライメント:
任意のメンバーの最大のアラインメントと同じになる。
各メンバーのアラインメント要件が満たされるように、structの中に埋め込みバイトが追加される。

宣言に複数のalignas指定子が存在する場合
→そのstructのアラインメントは少なくとも最も大きな指定子の値になる。


alignadの例：
C++に移植可能なため、支援マクロalignofを使用する。
動作は_Alignofを使用する場合と同じ。
```lang:C
// Compile with /std:c11

#include <stdio.h>
#include <stdalign.h>

typedef struct 
{
    int value; // aligns on a 4-byte boundary. There will be 28 bytes of padding between value and alignas
    alignas(32) char alignedMemory[32]; // assuming a 32 byte friendly cache alignment
} cacheFriendly; // this struct will be 32-byte aligned because alignedMemory is 32-byte aligned and is the largest alignment specified in the struct

int main()
{
    printf("sizeof(cacheFriendly): %d\n", sizeof(cacheFriendly)); // 4 bytes for int value + 32 bytes for alignedMemory[] + padding to ensure  alignment
    printf("alignof(cacheFriendly): %d\n", alignof(cacheFriendly)); // 32 because alignedMemory[] is aligned on a 32-byte boundary

    /* output
        sizeof(cacheFriendly): 64
        alignof(cacheFriendly): 32
    */
}
```

## alignofと_Alignof
_Alignofとalignof：
指定された型のアラインメントがバイト単位で返される。
型size_tの値を返す。

alignofの構文
```lang:C
alignof(type)
_Alignof(type)
```

alignofの例
```lang:C
// Compile with /std:c11

#include <stdalign.h>
#include <stdio.h>

int main()
{
    size_t alignment = alignof(short);
    printf("alignof(short) = %d\n", alignment); // 2
    printf("alignof(int) = %d\n", alignof(int)); // 4
    printf("alignof(long) = %d\n", alignof(long)); // 4
    printf("alignof(float) = %d\n", alignof(float)); // 4
    printf("alignof(double) = %d\n", alignof(double)); // 8

    typedef struct
    {
        int a;
        double b;
    } test;

    printf("alignof(test) = %d\n", alignof(test)); // 8 because that is the alignment of the largest element in the structure

    /* output
        
       alignof(short) = 2
       alignof(int) = 4
       alignof(long) = 4
       alignof(float) = 4
       alignof(double) = 8
       alignof(test) = 8
    */
}
```
C++に移植可能であるため、支援マクロalignofを使用する。
動作は、_Alignofを使用する場合と同じ。


