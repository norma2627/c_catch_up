#include<stdio.h>

int main(void){

    int no;

    printf("整数を入力せよ。");
    scanf("%d", &no);

    if (no == 0){
        puts("0です。");
    }
    else if (no > 0){
        puts("正の数です。");
    }
    else{
        puts("負です。");
    }

    return 0;
}