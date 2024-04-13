# Overview of Declarations
宣言の概要

宣言:
一連の識別子の解釈と属性を指定する。
識別子によって名前が付けられたオブジェクトや関数のためにストレージの予約も行う宣言は、"定義"と呼ばれる。


変数、関数、型に関するC宣言の構文:
declaration:
 declaration-specifiersattribute-seqoptinit-declarator-listopt;

/* attribute-seqopt は Microsoft 固有です */

declaration-specifiers:
 storage-class-specifierdeclaration-specifiersopt
 type-specifierdeclaration-specifiersopt
 type-qualifierdeclaration-specifiersopt

init-declarator-list:
 init-declarator
 init-declarator-list , init-declarator

init-declarator:
 declarator
 declarator = initializer


init-declarator-list内の宣言:
名前が付けられた識別子

init: initialixer(初期化子)の省略形

init-declarator-list: 
コマンドで区切られた宣下子のシーケンス
宣言子が追加の型情報または初期化子を持つ。

declarator：
宣言されている識別子が含まれる。

非終端要素declaration-specifers:
リンケージ、ストレージ存続期間、宣言子が示すエンティティの型の一部を指定する。
一連の型指定子とストレージクラス指定子で構成されている。

宣言:
ストレージクラス指定子、型指定子、型修飾子、宣言子、初期化子の組み合わせで構成される。

sttribute-seq：
宣言にはattribute-seqに示されている省略可能な属性を1つ以上含めることができる。

seq:
sequence(シーケンス)の省略形。


変数宣言の一般的な形式:
type-speifierは変数のデータ型を示す。

型がconstまたはvolatileで変換される場合:
type-specifierは複合型にすることができる。

declarator:
配列型、ポインター型を宣言するために変更される可能性がある変数の名前を示す。
例
```lang:C
int const *fp;
```

fpという名前の変数を、変更不可能な(const)int値へのポインターとして宣言する。
コンマで区切った複数の宣言子を使用して、複数の変数を宣言で定義できる。

宣言:
少なくとも1つの宣言子を持つ。
その型指定子が構造体タグ、共用体タグ、列挙のメンバーを宣言する必要がある。

宣言子:
配列、ポインター、関数型を宣言するための、角カッコ([]),アスタリスク(*),かっこ(())で変更できる識別子。
単純な変数(文字、変数、浮動小数点項目など)、単純な変数の構造体/共用体を宣言する場合、declaratorは単なる識別子。

すべての定義は暗黙の宣言
→すべての宣言が定義というわけではない。
例:externストレージクラス指定子を使用した変数宣言は"定義"宣言ではなく"参照"宣言になる。

外部変数を定義する前に参照する場合:
外部変数を使用されている場所とは異なるソースファイルで定義で定義する場合は、extern宣言が必要。
ストレージは、"参照"宣言によって割り当てられず、変数は宣言で初期化できません。

ストレージクラスまたは型(または両方)は変数宣言に必要。
_declspecを除いて、1個のストレージクラス指定子のみを宣言で使用でき、すべてのストレージクラスをすべてのコンテキスト使用できるわけではない。


