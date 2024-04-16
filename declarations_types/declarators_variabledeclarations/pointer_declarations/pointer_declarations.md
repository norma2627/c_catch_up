# Pointer Declarations
ポインター宣言

ポインター変数に名前を付けて、変数が指すオブジェクトの型を指定する。

ポインターとして宣言された変数:
メモリアドレスを保持する。


## Synatax
declarator:
 pointeroptdirect-declarator

direct-declarator:
 identifier
 ( declarator )
 direct-declarator[constant-expressionopt]
 direct-declarator ( parameter-type-list )
 direct-declarator(identifier-listopt)

pointer:
 *type-qualifier-listopt
 *type-qualifier-listoptpointer

type-qualifier-list:
 type-qualifier
 type-qualifier-list type-qualifier


type-specifier: 
オブジェクトの型を指定する
指定できる型:
任意の基本型、構造体型、共用体型。
ポインター変数:
関数、配列、他のポインターを指すこともできる。

type-specifier void:
ポインターが参照する型を後から指定できる。
voidへのポインターとも呼ばれる。void *と記述する。
voidへのポインターとして宣言された変数:
任意の型のオブジェクトを指すために使用できる。
※ポインターに対する操作やポインターが指すオブジェクトとして実行する必要がある。

type-qualifier: 
const,volatileのいずれか、または両方を指定できる。
ポインターがプログラム自体によって、変更できないこと(const)
または、ポインターがプログラムの制御範囲以外のプロセスによって正当に変更できること(volatile)をそれぞれ指定する。


### 使用例
ポインター宣言の例
```lang:c
char *message; 
```
messageポインターはchar型の変数を指している。

```lang:c
int *pointers[10];  /* Declares an array of pointers */
```
pointers配列には10個の要素があり、各要素はint型の変数へのポインター。

```lang:c
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */
```
pointer変数は、10個の要素を持つ配列を指す。配列の各要素はint型。

```lang:c
int const *x;      /* Declares a pointer variable, x,
                      to a constant value */
```
ポインターxが別のint値を指すように変更することはできる。
指す値自体を変更することはできない。

```lang:c
const int some_object = 5 ;
int other_object = 37;
int *const y = &fixed_object;
int volatile *const z = &some_object;
int *const volatile w = &some_object;
```
宣言の中で、変数yはint値への定数ポインターとして宣言されている。
指す値を変更することはできるが、ポインター自体は常に同じ場所、fixed_objectのアドレスを指す必要がある。
zは定数ポインターだが、プログラムによって値を変更できないintを指すことが併せて宣言されている。
volatile指定子：
zが指すconst intの値はプログラムによって変更できないが、プログラムと同時に実行されているプログラムと同時い実行されているプロセスによって正当に変更できる。
wの宣言:指す値がプログラムによって変更できず、ポインターもプログラムによって変更できないことを指す。


```lang:c
struct list *next, *previous; /* Uses the tag for list */
```

```lang:c
struct list
{
    char *token;
    int count;
    struct list *next;
} line;
```

```lang:c
struct id
{
    unsigned int id_no;
    struct name *pname;
} record;
```