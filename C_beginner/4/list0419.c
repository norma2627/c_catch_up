#include<stdio.h>

int main(void){

    int height, width;

    puts("長方形を表示します。");
    printf("長さ: ");
    scanf("%d", &height);
    printf("高さ: ");
    scanf("%d", &width);

    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}