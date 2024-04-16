# Typedef Declarations
Typedef宣言

ストレージクラスとしてのtypedefによる宣言。
宣言子: 新しい型になる。
既にCで定義されている型や宣言した型に対してより短い、または分かりやすい名前を作成できる。
変更可能な実装の詳細をカプセル化できる。

変数または関数宣言と同様に解釈される。
宣言によって指定された型を想定する代わりに識別子は型のシノニムになる。


## Syntax
declaration:
 declaration-specifiersinit-declarator-listopt;

declaration-specifiers:
 storage-class-specifierdeclaration-specifiersopt
 type-specifierdeclaration-specifiersopt
 type-qualifierdeclaration-specifiersopt

storage-class-specifier:
 typedef

type-specifier:
 void
 char
 short
 int
 long
 float
 double
 signed
 unsigned
 struct-or-union-specifier
 enum-specifier
 typedef-name

typedef-name:
 identifier


typedef宣言によって新しい型が作成されることはない。
既存の型のシノニム、または他の方法で指定できる型の名前を作成する。
Typedef名を型指定子として使用するときは、特定の型指定子と組み合わせることはできるが、それ以外はできない。
使用できる修飾子にはconstとvolatileがある。

Typedef名は、名前空間を通常の識別子と共有する。
プログラムは同じ名前のtypedef名とローカルスコープ識別子を持つことができる。
```lang:c
typedef char FlagType;

int main()
{
}

int myproc( int )
{
    int FlagType;
}
```
typedefと同じ名前でローカルスコープの識別子を宣言するとき、あるいは尾内スコープまたは内部スコープ内で構造体または共有体のメンバーを宣言するときは、型指定子模指定する必要がある。


### 使用例
typedef宣言の例

```lang:c
typedef int WHOLE; /* Declares WHOLE to be a synonym for int */
```
WHOLEは WHOLE i; const WHOLE i;などの変数宣言で使用できるようになった。
宣言long WHOLE i;は無効。

```lang:C
typedef struct club
{
    char name[30];
    int size, year;
} GROUP;
```
3つのメンバーを持つ構造体の型としてGROUPを宣言してる。
構造体タグclubも指定されている。
typedef名またはその構造体タグを宣言で使用できる。
structキーワードはタグで使用する必要がある。
typedef名でstructキーワードを使用することはできない。
```lang:c
typedef GROUP *PG; /* Uses the previous typedef name
                      to declare a pointer            */
```
型PGは、構造体型として定義されるGROUP型へのポインターとして宣言されている。
```lang:c
typedef void DRAWF( int, int );
```
値を返さず2つのint引数を取る関数に対して、、型DRAWFを提供します。
以下の宣言は同じ
```lang:c
DrAWF box;
```
```lang:c
void box( int, int);
```
