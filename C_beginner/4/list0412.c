#include<stdio.h>

int main(void){

    int num;

    printf("正の整数を入力せよ。: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++){
        printf("%d", i);
    }
    putchar('\n');

    return 0;
}