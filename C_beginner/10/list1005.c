#include<stdio.h>

void set999(int *p){
    *p = 999;
}

int mian(void){
    int x = 123;
    int y = 456;
    int sw;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("変更するのは、x:0 / y:1   : ");
    scanf("%d", &sw);

    if (sw == 0){
        set999(&x);
    }
    else {
        set999(&y);
    }
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}