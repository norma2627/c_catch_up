#include<stdio.h>

int main(void){

    int tensu1;
    int tensu2;
    int tensu3;
    int tensu4;
    int tensu5;
    int sum = 0;

    printf("5人の点数を入力せよ。\n");
    printf("1: ");
    scanf("%d", &tensu1);
    sum += tensu1;
    printf("2: ");
    scanf("%d", &tensu2);
    sum += tensu2;
    printf("3: ");
    scanf("%d", &tensu3);
    sum += tensu3;
    printf("4: ");
    scanf("%d", &tensu4);
    sum += tensu4;
    printf("5: ");
    scanf("%d", &tensu5);
    sum += tensu5;

    printf("合計点: %5d\n", sum);
    printf("平均点: %5.1f\n", (double)sum / 5);


    return 0;
}