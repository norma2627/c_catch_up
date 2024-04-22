#include<stdio.h>

int main(void){

    int no;

    printf("整数を入力してください。:");
    scanf("%d", &no);   // 整数値を読み込む

    printf("%dと入力しましたね。\n", no);

    return 0;
}


/* memo
    scanf関数: キーボードからの読み込みに使う
    ※読み込む際には＆が必要。
*/