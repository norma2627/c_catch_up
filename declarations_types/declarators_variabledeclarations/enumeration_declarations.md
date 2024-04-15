# C enumeration declarations
Cでの列挙体の宣言

列挙体:
名前がついた一連の整数定数で構成される。
列挙型の宣により、列挙タグの名前が指定される。
名前付き整数の識別子のセットが定義される。
列挙型の変数には、その型で定義された列挙セットの1つの値が格納される。

識別子のセット:
列挙セット、列挙定数、列挙子、メンバー


enum型の変数はインデックス式:
すべての算術演算子および関係演算子のオペランドとしても使用できる。
列挙型は#defineプリプロセッサディレクティブの代わりとして使用できる。
値が自動的に生成され、標準のスコープ規則に準拠できるという利点がある。


ANSI Cで列挙定数の値を定義する式:
常にint型が含まれる。
共用体変数に関連付けられたストレージは1つのint値で必要なストレージになる。
列挙定数または列挙型の値は、C言語の整数式が必要されているすべての場所で使用できる。


## Synatax
enum-specifier:
 enumidentifieropt{enumerator-list}
 enum identifier

enumerator-list:
 enumerator
 enumerator-list , enumerator

enumerator:
 enumeration-constant
 enumeration-constant = constant-expression

enumeration-constant:
 identifier


indentifier:
省略可能。enumerator-listで定義された列挙型が指定される。
列挙子リストで指定された列挙体のタグとも呼ばれる。
型指定子は、enumerator-list非終端要素で指定された列挙型のタグとしてidentifierを宣言される。
```lang:C
enum identifier
{
    // enumerator-list
}
```
enumerator-list: 列挙セットのメンバーが定義される。


タグの宣言を参照できる場合:
それ以降の宣言でそのタグを使用し、enumerator-listを省略しているときは、その前に宣言された列挙型を指定する。
タグは定義された列挙型を参照する必要がある。
その列挙型は現在のスコープにふくまれている必要がある。
列挙型は他の場所で定義されているため、enumerator-listはこの宣言に含まれない。
列挙体から派生した型の宣言、および列挙型のtypeof宣言では、列挙型を定義する前に列挙タグを使用できる。

enumeration-constant = constant-expression:
既定の値をシーケンスをオーバーライドすることができる。
enumeration-xonstant = constant-expression: 
enumerator-listに表示され、enumeration-constantはconstant-expressionによって指定された値に関連付けられている。
constant-experssionはint型を含み、負の値である必要がある。


列挙セットのメンバーに次の規則が適用される
- 列挙セットには重複する定数値を含まれることができる。同じセット内の異なる2つの識別子(null,zeroのようなメンバー)に値0を関連付けることができる。
- 列挙リストの識別子: 参照範囲が同じである同一スコープ内の他の識別子と異なっている必要がある。他の列挙リストの通常の変数名や識別子が含まれる。
- 列挙タグは通常のスコープ規則に従う。参照範囲が同じである他の列挙タブ、構造体タグ、共用体タグと異なる必要がある。


使用例:
列挙体宣言の例。
```lang:C
enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;
```
値0はsaturdayに関連付けられている。
識別子sundayを明示的に0に設定している。
既定では、その他の識別子には値1〜5が割り当てられる。

例
```lang:C
enum DAY today = wednesday;
```
DAYセットの値をtoday変数に割り当てる。

列挙定数の名前を使用して値を割り当てる。
DAY列挙型は前に宣言されている。
必要なのはDAY列挙タグのみ。

列挙データ型の変数に整数値を明示的に割り当てられるため、型キャストを使用する。
```lang:C
workday = ( enum DAY ) ( day_value - 1 );
```

Cではキャストを勧めるが必須ではない。
```lang:C
enum BOOLEAN  /* Declares an enumeration data type called BOOLEAN */
{
    false,     /* false = 0, true = 1 */
    true
};

enum BOOLEAN end_flag, match_flag; /* Two variables of type BOOLEAN */
```


宣言の指定方法
```lnag:C
enum BOOLEAN { false, true } end_flag, match_flag;
```

指定方法2
```lnag:C
enum BOOLEAN { false, true } end_flag;
enum BOOLEAN match_flag;
```

変数の使用例
```lang:C
if ( match_flag == false )
    {
     .
     .   /* statement */
     .
    }
    end_flag = true;
```

名前のない列挙データ型を宣言することもできる。
データ型の名前を省略して、変数を宣言できる。
response変数は、定義された型の変数。
```lang:C
enum { yes, no } response;
```