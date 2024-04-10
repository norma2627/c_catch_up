# C Declarations and Definitions
宣言と定義:

宣言:
特定の変数、関数、型、およびその属性間の関連づけが設定されている。
識別子にいつどこでアクセスできるか(識別子の"リンケージ")も指定される。

[非終端要素declarationのANSI構文について](https://learn.microsoft.com/ja-jp/cpp/c-language/overview-of-declarations?view=msvc-170)


定義:
宣言と同じ関連づけが設定される。
変数にストレージが割り当てられる。

例: main, find, countの各関数、var,val変数が1つのソースファイルに次の順序で定義されている場合
```
int main() {}

int var = 0;
double val[MAXVAL];
char find(fileptr) {}
int count(double f) {}
```
変数var,valは、それ以上の宣言がなくても、find,count関数で使用できる。
しかし、mainからは認識されない(アクセスできない)

