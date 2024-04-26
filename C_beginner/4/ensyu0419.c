#include<stdio.h>

int man(void){

    int n;

    printf("整数値: ");
    scanf("%d", &n);

    int j = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d", i);
            puts("");
        }
        if (n % i == 0){
            j++;
        }

        printf("約数は%dでした。\n", j);
    }

    return 0;
}