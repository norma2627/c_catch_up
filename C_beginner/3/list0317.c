#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);

    int max, min;
    if (n1 > n2){
        max = n1;
        min = n2;
    }
    else{
        max = n2;
        min = n1;
    }

    printf("大きいほうの値は%dです。\n", max);
    printf("小さいほうの値は%dです。\n", min);

    return 0;
}