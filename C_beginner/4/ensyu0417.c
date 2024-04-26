#include<stdio.h>

int main(void){

    int n;

    printf("nの値: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        int sum = i;
        printf("%d の2乗は: %d\n", i, sum*sum);
    }
    putchar('\n');

    return 0;
}