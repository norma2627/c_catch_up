#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);

    int sa;

    if (n1 > n2){
        sa = n1 - n2;
    }
    else {
        sa = n2 - n1;
    }
    printf("差: %d\n", sa);

    return 0;
}