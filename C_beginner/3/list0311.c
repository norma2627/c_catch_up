#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("1: ");
    scanf("%d", &n1);
    printf("2: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("大きい方の値は%dです。\n", n1);
    }
    else{
        printf("大きいほうの値は%dです。\n", n2);
    }

    return 0;
}