#include<stdio.h>

int main(void){

    int n1, n2;

    puts("2つの整数を入力せよ。");

    prinf("整数A: ");
    scanf("%d", &n1);
    prinf("整数B: ");
    scanf("%d", &n2);

    if ((n1 > n2 && (n1 - n2) <= 10) || (n2 > n1 && (n2 - n1) <= 10)) {
        puts("それらの差は10以下です。");
    }
    else if ((n1 > n2 && (n1 - n2) >= 11) || (n2 > n1 && (n2 - n1) >= 11)) {
        puts("それらの差は11以上です。");
    }

    return 0;
}