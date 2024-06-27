/* 整数の値とポインタの値を表示 */

#include <stdio.h>

int main(void){

    int n; // int型整数
    int *ptr; // int *型ポインタ

    n = 90;
    ptr = &n; // nのアドレスを代入

    printf("nの値: %d\n", n);
    printf("&nの値: %p\n", &n); // nのアドレスを表示
    printf("ptrの値: %p\n", ptr); // ptrの値を表示

    return 0;
}


/*
実行結果

nの値: 90
&nの値: 0x7ffd1ee0f814
ptrの値: 0x7ffd1ee0f814


ポインタ
int *ptr
ptr = &n
ptrはint *型オブジェクト
整数を格納するオブジェクトのアドレス

変数
int n
n = **
nはint型オブジェクト
値は整数
*/