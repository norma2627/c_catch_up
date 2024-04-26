#include<stdio.h>

int main(void){

    int num1, num2;

    do {
        printf("正の整数を入力せよ。: ");
        scanf("%d", &num1);

        if (num1 <= 0){
            puts("正でない数値を入力しないでください。");
        }
    } while(num1 <= 0);

    num2 = num1;

    printf("%dを逆から読むと ", num2);
    while (num1 > 0){
        printf("%d", num1 % 10);
        num1 /= 10;
    }
    puts(" です。");

    return 0;
}