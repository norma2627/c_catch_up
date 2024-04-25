#include<stdio.h>

int main(void){

    int n;

    printf("整数: ");
    scanf("%d", &n);

    if (n % 5)  // 0でなければ実行
        puts("5で割りきれません。"); 

    return 0;
}