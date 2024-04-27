#include<stdio.h>

int main(void){

    int num1, num2;
    int cnt = 0;

    printf("正の整数を入力せよ。: ");
    scanf("%d", &num1);

    num2 = num1;

    do {
        if (num1 <= 0){
            puts("正ではない数値を入力しないでください。");
        }
    } while (num1 <= 0);

    while (num1 > 0){
        num1 /= 10;
        cnt++;
    }
    printf("%d は %d 桁です。\n", num2, cnt);
    

    return 0;
}