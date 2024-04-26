#include<stdio.h>

int main(void){

    int num;

    printf("numの値: ");
    scanf("%d", &num);

    int sum = 0;

    for (int i = 0; i <= num; i++){
        sum = sum + i;
    }

    printf("1から%dまでの総和は%dです。\n", num, sum);

    return 0;
}