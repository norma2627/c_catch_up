#include<stdio.h>

int main(void){

    int num;

    printf("正の整数: ");
    scanf("%d", &num);

    while (num-- > 0){
        putchar('*');
    }
    putchar('\n');

    return 0;
}

/* memo
    文字定数''
    文字列リテラル""

    putchar: ''
    printf: ""
*/