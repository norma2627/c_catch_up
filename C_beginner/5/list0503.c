#include<stdio.h>

int main(void){

    int a[5];

    for ( int i = 0; i < 5; i++){
        a[i] = i + 1;
    }

    for (int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[1]);
    }

    return 0;
}