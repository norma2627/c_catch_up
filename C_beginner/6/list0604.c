#include<stdio.h>

int max2(int a, int b){
    return a > b ? a : b;
}

int max4(int a, int b, int c, int d){
    return max2(max2(a, b), max2(c, d));
}

int main(void){

    int n1, n2, n3, n4;

    puts("4つの整数を入力せよ。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);
    printf("整数3: ");
    scanf("%d", &n3);
    printf("整数4: ");
    scanf("%d", &n4);

    printf("最も大きい値は%dです。\n", max(n1, n2, n3, n4));

    return 0;
}
