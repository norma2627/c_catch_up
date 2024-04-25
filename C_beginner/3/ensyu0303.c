#include<stdio.h>

int main(void){

    int num;

    printf("整数: ");
    scanf("%d", &num);

    if (num > 0){
        printf("絶対値: %d", -num);
    }
    else{
        printf("絶対値: %d", num);
    }

    return 0;
}