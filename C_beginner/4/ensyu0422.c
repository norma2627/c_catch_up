#include<stdio.h>

int main(void){

    int no1, no2, height, width;

    puts("長方形を表示します。");
    printf("辺1: ");
    scanf("%d", &no1);
    printf("辺2: ");
    scanf("%d", &no2);

    if (no1 < no2){
        height = no1;
        width = no2;
    }
    else {
        height = no2;
        width = no1;
    }

    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}