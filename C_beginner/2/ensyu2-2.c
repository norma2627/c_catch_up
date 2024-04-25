#include<stdio.h>

int main(void){

    int a, b, wa, seki;

    puts("2つの整数を入力してください。");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    wa = a + b;
    seki = a * b;

    printf("和: %d, 積: %d\n", wa, seki);

    return 0;
}