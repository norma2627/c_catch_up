#include<stdio.h>

int main(void){

    int num;
    int retry = 1;

    do {
        if (retry == 0){
            puts("まだやるんだね。");
        }
        
        printf("整数を入力せよ。: ");
        scanf("%d", &num);

        if (num == 0){
            puts("その数は0です。");
        }
        else if(num > 0){
            puts("その数は正です。");
        }
        else {
            puts("その数は負です。");
        }

        printf("まだ続ける?【Yes:0,No:9】");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}