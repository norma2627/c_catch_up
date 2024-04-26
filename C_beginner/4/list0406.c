#include<stdio.h>

int main(void){

    int num;

    printf("正の整数を入力せよ。: ");
    scanf("%d", &num);

    while (num >= 0){
        printf("%d", num--);
    }
    printf("\n");

    return 0;
}