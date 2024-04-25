#include<stdio.h>

int main(void){

    int a, b;

    puts("a, bの値を入力せよ。");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("aはbの%fです。\n", (double)100 * a / b);

    return 0;
}