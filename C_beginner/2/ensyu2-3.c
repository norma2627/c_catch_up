#include<stdio.h>

int main(void){

    double num;

    printf("実数を入力せよ: ");
    scanf("%lf", &num);

    printf("%fが入力されました。\n", num);

    return 0;
}