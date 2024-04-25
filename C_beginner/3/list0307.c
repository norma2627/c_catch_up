#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    if (n1 != n2){
        puts("違う値です。");
    }
    else{
        puts("同じ値です。");
    }

    return 0;
}