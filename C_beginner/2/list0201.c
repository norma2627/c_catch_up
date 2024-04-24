#include<stdio.h>

int main(void){

    int x, y;

    puts("2つの整数を入力せよ。");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("wa: %d\n", x + y);
    printf("sa: %d\n", x - y);
    printf("seki: %d\n", x * y);
    printf("syo: %d\n", x / y);

    return 0;
}