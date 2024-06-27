/* ポインタの初期化 */

#include <stdio.h>

int main(void){

    int n = 123;
    int *p = &n;

    printf("nの値: %d\n", n);
    printf("*pの値: %d\n", *p);   // pが指すオブジェクトの値

    return 0;
}