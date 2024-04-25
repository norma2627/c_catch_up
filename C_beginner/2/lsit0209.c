#include<stdio.h>

int main(void){

    int a, b;

    puts("a,bを入力せよ。");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("平均: %f\n", (a + b) / 2.0);
    printf("平均: %f\n", (double)(a + b) / 2.0);

    return 0;
}


/* memo

    キャスト式: (型) 式
    キャスト: 明示的な型変換
    (): キャスト演算子

*/