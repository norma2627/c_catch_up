#include<stdio.h>

int main(void){
    int n1, n2;

    puts("2つの整数を入力してください。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);

    printf("それらの和は%dです。\n", n1 + n2);

    return 0;

}


/*
    puts関数: 実引数として与えられた文字の並びを出力した上で改行文字を出力する。
*/