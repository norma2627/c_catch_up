#include<stdio.h>

int main(void){

    int no;

    puts("正方形をつくります。\n");
    printf("何段ですか？: ");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++){
        for (int j = 1; j <= no; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}