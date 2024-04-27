#include<stdio.h>

int main(void){

    for (int i = 1; i <= 11; i++){
        if (i == 1){
            printf("   | 1 2 3 4 5 6 7 8 9\n");
        }
        if (i == 2){
            printf("---+------------------\n");
        }
        if(i == 3){
            printf(" %d | ", i - 2);
            for (int j = 1; j <=9; j++){
                printf("3d", (i - 2) * j);
            }
            putchar('\n');
        }
    }
    return 0;
}