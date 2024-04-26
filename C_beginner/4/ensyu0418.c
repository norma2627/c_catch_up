#include<stdio.h>

int main(void){

    int num;

    printf("何個*を表示しますか: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        putchar('*');
        if (i % 5 == 0){
            puts("");
        }
        putchar('\n');
    }

    return 0;
}