#include<stdio.h>

int main(void){

    int num;
    int i = 0;

    printf("正の整数値を入力せよ。: ");
    scanf("%d", &num);

    if (num >= 0){
        while (i <= num){
            printf("%d", i);
            i = i + 2;
        }
        printf("\n");
    }

    return 0;
}