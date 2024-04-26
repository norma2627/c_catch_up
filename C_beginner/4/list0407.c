#include<stdio.h>

int main(void){

    int num;

    printf("正の整数を入力せよ。: ");
    scanf("%d", &num);

    int i = 0;
    while (i <= num){
        printf("%d", i++);
    }
    printf("\n");

    return 0;
}