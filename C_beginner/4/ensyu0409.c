#include<stdio.h>

int main(void){

    int num;

    printf("正の整数: ");
    scanf("%d", &num);

    if (num-- > 0){
        while (num-- >= 0){
            putchar('+');
            if (num-- >= 0){
                putchar('-');
            }
        }
        printf("\n");
    }

    if (num > 0){
        puts("\n");
    }

    return 0;
}