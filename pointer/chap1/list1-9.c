#include <stdio.h>

int main(void){

    int n;
    int *p = &n;

    /* nへのポインタを符号なし整数値に変更して表示*/
    printf("&n: %lu\n", (unsigned long)&n);
    printf("p: %lu\n", (unsigned long)p);

    return 0;
}