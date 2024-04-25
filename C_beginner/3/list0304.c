#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力せよ。");
    scanf("%d", &n);

    if (n % 2)
        puts("奇数です。");
    else
        puts("偶数です。");

    return 0;

}