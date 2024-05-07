#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("この処理計では0-%dの乱数が生成できます。\n", RAND_MAX);

    int retry;

    do {
        printf("\n乱数%dを生成しました。\n", rand());

        printf("もう一度? はい(1) いいえ(0): ");
        scanf("%d", retry);
    } while (retry == 1);

    return 0;
}