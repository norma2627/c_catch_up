#include <stdio.h>

int main(void){

    int x = 55;
    int *p = &x;

    printf("%d\n", 5**p);   // 5**pは5*55、つまり275

    return 0;
}