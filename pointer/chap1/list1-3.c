/* ポインタが指すオブジェクトの値を表示 */

#include <stdio.h>

int main(void){

    int n;
    int *ptr;

    n = 38;
    ptr = &n;

    printf("nの値: %d\n", n);
    printf("*ptrの値: %d\n", *ptr);   // ptrが指すオブジェクトの値を表示(ptrの場合:ptrのアドレス)

    return 0;
}


/*
実行結果

nの値: 38
*ptrの値: 38

*/