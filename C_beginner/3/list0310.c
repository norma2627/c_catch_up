#include<stdio.h>

int main(void){

    int no;

    printf("整数を入力せよ。");
    scanf("%d", &no);

    if (no > 0){
        if (no % 2 == 0){
            puts("偶数です。");
        }
        else{
            puts("奇数です。");
        }
    }
    else {
        puts("正でない値が入力されました。");
    }

    return 0;
}