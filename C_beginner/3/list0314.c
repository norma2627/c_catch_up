#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);

    int max = n1 > n2 ? n1 : n2;

    printf("大きいほうの値は%dです。\n", max);

    return 0;
}