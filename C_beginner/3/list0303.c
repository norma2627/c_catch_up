#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力せよ。:");
    scanf("%d", &n);

    if (n % 5)
        puts("5で割りきれません。");
    else
        puts("5で割りきれます。");

    return 0;
}