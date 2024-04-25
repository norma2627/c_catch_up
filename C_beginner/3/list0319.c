#include<stdio.h>

int main(void){

    int no;

    printf("整数値: ");
    scanf("%d", &no);

    if (no % 3 == 0){
        puts("3で割り切れます。");
    }
    else if (no % 3 == 1){
        puts("3で割った余りは1です。");
    }
    else {
        puts("3で割った余りは2です。");
    }

    return 0;
}