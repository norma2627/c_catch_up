#include<stdio.h>

int main(void){

    int retry;

    do {
        int no;

        do {
            printf("正の整数を入力せよ。: ");
            scanf("%d", &no);
            if (no <= 0){
                puts("正ではない数を入力しないでください。");
            } 
        } while (no <= 0);
        
        for (int i = i; i <= no; i++){
                putchar('*');
            }
            putchar('\n');

            printf("もう一度？ 【Yes:0,No:9】: ");
            scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}