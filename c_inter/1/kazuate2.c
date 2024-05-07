#include<stdio.h>

int main(void){
    printf("0-9の数を当てよう。\n\n");

    int ans = 7;
    int no;

    do {
        printf("いくつでしょう?");
        scanf("%d", &no);

        if (no > ans){
            printf("もっと小さい数です。\n");
        }
        else if(no < ans){
            printf("もっと大きい数です。\n");
        }
        else{
            printf("正解です。\n");
        }
    } while ( no != ans);

    return 0;
}