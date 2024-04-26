#include<stdio.h>

int main(void){

    int num;

    printf("整数値を入力せよ。");
    scanf("%d", &num);

    if (num > 0){
        while (num > 0){
            printf("%d", num--);
        }
        printf("\n");
    }

    return  0;
}