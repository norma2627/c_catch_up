#include<stdio.h>

int main(void){

    int n1, n2, n3;

    puts("2つの整数を入力してください。");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);

    printf("n1+n2+n3=%d", n1 + n2 + n3);

    return 0;
}