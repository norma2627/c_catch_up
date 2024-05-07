#include<stdio.h>

int main(void){

    char name[48];

    printf("名前は？: ");
    scanf("%d", name);

    pritnf("こんにちは。%sさん!!\n", name);

    return 0;
}