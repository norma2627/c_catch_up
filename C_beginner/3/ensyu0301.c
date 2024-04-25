#include<stdio.h>

int main(void){

    int a, b;

    puts("2つの整数を入力せよ。");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if (a % b)
        puts("BはAの約数ではありません。");
    else
        puts("BはAの約数です。");

    return 0;
}