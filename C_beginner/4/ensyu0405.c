#include<stdio.h>


int main(void){

    int num;

    printf("整数値を入力せよ。: ");
    scanf("%d", &num);
    
    int i = 1;
    if (i <= num){
        while (i <= num){
            printf("%d", i++);
        }
        printf("\n");
    }

    return 0;
}