#include<stdio.h>

int main(void){

    int a[5] = {1, 2, 3, 4, 5}; // 初期化

    for (int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}