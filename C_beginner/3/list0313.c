#include<stdio.h>

int main(void){

    int n1, n2, n3;

    puts("3つの整数を入力せよ。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);
    printf("整数3: ");
    scanf("%d", &n3);

    int max = n1;
    if (n2 > max){
        max = n2;
    }
    if (n3 > max){
        max = n3;
    }

    printf("最大値は%dです。", max);


    return  0;
}