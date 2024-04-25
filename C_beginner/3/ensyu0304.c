#include<stdio.h>

int main(void){

    int num1, num2;

    puts("2つの整数を入力せよ。");
    printf("A: ");
    scanf("%d", &num1);
    printf("B: ");
    scanf("%d", &num2);

    if ( num1 > num2 ){
        puts("AはBより大きいです。");
    }

    return  0;
}