#include<stdio.h>

int main(){

    int no;

    printf("整数を入力せよ: ");
    scanf("%d", &no);

    printf("最下位桁%dです。\n", no % 10);

    return 0;
}