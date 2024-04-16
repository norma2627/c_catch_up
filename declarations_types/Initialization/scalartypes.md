# Initializing Scalar Types
スカラ型の初期化

assignment-expressionの値が変数に代入される。
代入の変換規則が適用される。


## Syntax
declaration:
 declaration-specifiersinit-declarator-listopt;

declaration-specifiers:
 storage-class-specifierdeclaration-specifiersopt
 type-specifierdeclaration-specifiersopt
 type-qualifierdeclaration-specifiersopt

init-declarator-list:
 init-declarator
 init-declarator-list , init-declarator

init-declarator:
 declarator
 declarator=initializer /* スカラーの初期化の場合 */

initializer:
 assignment-expression


- ファイルスコープレベルで宣言された変数は初期化できる。
- static sorage-class-specifierを指定して宣言されたすべてのグローバル変数は定数式を使用して初期化できる。
- auto,registerのストレージクラス指定子によって宣言された変数:変数が宣言されたブロックに実行制御が渡されるたびに初期化される。
- 外部変数の宣言の初期化およびすべてのstatic変数の初期化値は、定数式である必要がある。
- 識別子の宣言にブロックスコープが存在し、識別子に外部リンケージがある場合、宣言に初期化を含めることができない。


### 使用例
```lang:C
int x = 10;
```
xは10に初期化される。

```lang:c
register int *px = 0;
```
ポインターpxは0いん初期化され、nullポインターが作成される。

