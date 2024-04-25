#include<stdio.h>

int main(void){

    int num;

    printf("整数を入力せよ。");
    scanf("%d", &num);

    if (num){
        puts("その数はゼロではありません。");
    }
    else {
        puts("ゼロです。");
    }

    return 0;
}


/* memo
    numの値が非0: 先頭側のputs関数の呼出しが実行される。
    numの値が0: 後ろ側のputs関数の呼出しが実行される。
*/