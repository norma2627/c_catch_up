#include<stdio.h>
#include<string.h>

int main(void){

    char str[128];

    printf("文字列を入力せよ: ");
    scanf("%s", str);

    printf("整数に変換すると%dです。\n", atoi(str));

    return 0;
}