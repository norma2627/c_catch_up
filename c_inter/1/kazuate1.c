#include<stdio.h>

int main(void){

    printf("0-9の整数を当ててみよう。\n");

    int ans = 7;
    int no;

    printf("数を入力してください。:");
    scanf("%d", &no);

    if (no > ans){
        printf("もう少し小さい数です。\n");
    }
    else if (no < ans){
        printf("もう少し大きい数です。\n");
    }
    else{
        printf("正解です。\n");
    }

    return 0;
}