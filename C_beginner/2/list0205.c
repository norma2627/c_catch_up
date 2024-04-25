#include<stdio.h>

int main(void){

    int a, b;

    puts("2つの整数を入力せよ。");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("平均: %d\n", ( a + b ) / 2);

    return 0;
}