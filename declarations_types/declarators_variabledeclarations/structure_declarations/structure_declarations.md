# Structure Declarations
構造体宣言

構造体宣言:
型に名前をつけ、異なる型を持つことのできる変数値のシーケンスを指定する。

タグ:
省略感応な識別子で構造体で構造体の型に名前を付けると、その後はタグを使用してその構造体型を参照できる。

構造体型の変数:
その型で定義されているシーケンス全体を保持する。

Cの構造体:
他の言語でレコードと呼ばれる型に似ている。


## Syntax
struct-or-union-specifier:
 struct-or-unionidentifieropt{struct-declaration-list}
 struct-or-union identifier

struct-or-union:
 struct
 union

struct-declaration-list:
 struct-declaration
 struct-declaration-list struct-declaration

struct-declaration:
 specifier-qualifier-list struct-declarator-list ;

specifier-qualifier-list:
 type-specifierspecifier-qualifier-listopt
 type-qualifierspecifier-qualifier-listopt

struct-declarator-list:
 struct-declarator struct-declarator-list , struct-declarator

struct-declarator:
 declarator
 type-specifierdeclaratoropt:constant-expression


構造型の宣言:
構造体の領域は確保されない。
構造体変数を宣言するためのテンプレート。

struct-declaration-list:
構造体メンバーの型と名前を指定する。
引数は1つまたは複数の変数またはビットフィールドの宣言を含む。

struct-declaration-listで宣言された各変数は構造体型のメンバーとして定義される:
struct-declaration-lsit内での変数宣言:
他の変数宣言と同じ形式。
ストレージクラスの指定子または初期化子を宣言に含めることはできない。

構造体メンバー:
void,不完全な型,関数型を除く任意の変数型を持つことができる。
※メンバーをメンバーを含む構造体の型を持つように宣言することはできない。
※構造体にタグがある場合: メンバーをメンバーを含む構造体型へのポインターとして宣言できる。→構造体のリンクリストを作成できる。

構造体:
他の識別子と同じスコープに従う。
構造体の識別子:
同じ可視性を持つ構造体タグ、共用体タグ、列挙タグとは異なる必要がある。

struct-declaration-list内のstruct-declaration:
リスト内で一意である必要がある。
struct-declaration-list内の識別子名は、通常の変数名や他の構造体宣言リストの識別子と別にする必要はない。

入れ子構造にも、ファイルスコープレベルで宣言されているかのようにアクセスできる。
例
```lang:C
struct a
{
    int x;
    struct b
    {
      int y;
    } var2;
} var1;
```

どちらも有効な宣言
```lang:C
struct a var3;
struct b var4;
```

構造体宣言の例
```lnag:C
struct employee   /* Defines a structure variable named temp */
{
    char name[20];
    int id;
    long class;
} temp;
```

employee構造体:
3つのメンバーname,id,classを持つ。

nameメンバー:
20要素の配列で、id=int型、class=long型を持つ単純なメンバー。
識別子employeeは構造体識別子
```lang:C
struct employee student, faculty, staff;
```

3種類の構造体変数を定義する例
```lnag:C
struct           /* Defines an anonymous struct and a */
{                /* structure variable named complex  */
    float x, y;
} complex;
```
3つのメンバーで構成される同じリストを持つ。
メンバーは、前の例で定義した構造体型employeeを持つように宣下されている。
```lang:C
struct           /* Defines an anonymous struct and a */
{                /* structure variable named complex  */
    float x, y;
} complex;
```

complex構造体:
float型の2つのメンバー、x,yを持つ。
構造体型にはタグがないため、無名または匿名になる。
```lang:C
struct sample   /* Defines a structure named x */
{
    char c;
    float *pf;
    struct sample *next;
} x;
```

構造体の最初の2つのメンバー:
char変数とfloat値へのポインター。

3番目のメンバーnext: 
定義されている構造体型へのポインターとして宣言されている。

匿名構造体:
1つの宣言ですべての構造体インスタンスを定義する場合などタグ名が必要ない場合に便利なことがある。
```lnag:C
struct
{
    int x;
    int y;
} mystruct;
```

埋め込み構造体は無名。
```lnag:C
struct somestruct
{
    struct    /* Anonymous structure */
    {
        int x, y;
    } point;
    int type;
} w;
```