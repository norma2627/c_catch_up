#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("1: ");
    scanf("%d", &n1);
    printf("2: ");
    scanf("%d", &n2);

    int max;
    if (n1 > n2){
        max = n1;
    }
    else {
        max = n2;
    }
    printf("大きいほうの値は%dです。\n", max);

    return 0;
}