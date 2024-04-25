#include<stdio.h>

int main(void){

    int num;

    printf("整数を入力せよ。");
    scanf("%d", &num);

    if ((num % 10) == 5){
        puts("最下位の桁は5です。");
    }
    else{
        puts("最下位の桁は5ではありません。");
    }

    return 0;
}