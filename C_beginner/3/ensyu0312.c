#include<stdio.h>

int main(void){

    int num;

    printf("整数を入力せよ。");
    scnaf("%d", &num);

    switch (num % 2){
    case 0:
        puts("偶数です。");
        break;
    case 1:
        puts("奇数です。");
        break;

    return 0;
}