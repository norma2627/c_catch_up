#include<stdio.h>

int main(void){

    int num;

    printf("正の整数: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        putchar('*');
    }
    putchar('\n');

    return 0;
}