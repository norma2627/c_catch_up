#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void){

    scrad(time(NULL));
    int ans = rand() % 1000;
    int no;

    printf("0-999の整数の数を当てよう。\n");
    do {
        printf("いくつかな？: ");
        scanf("%d", &no);

        if (no > ans){
            printf("もう少し小さい数です。\n");
        }
        else if (no < ans){
            printf("もう少し大きい数です。\n");
        }
    } while (no != ans);

    printf("正解です。\n");

    return 0;
}