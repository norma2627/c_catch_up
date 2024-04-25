#include<stdio.h>

int main(void){

    int num;

    printf("整数を入力せよ。");
    scanf("%d", &num);

    printf("%dの符号を反転した値は%dです。\n", +num, -num);

    return 0;
}



/* memo
    二項演算子: オペランドが2個。
    単項演算子: オペランドが1個。
    三項演算子: オペランドが3個。
*/