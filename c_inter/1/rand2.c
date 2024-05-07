#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void){

    srand(time(NULL));
    
    printf("この処理系では0-%dの乱数を生成できます。\n", RAND_MAX);

    int retry;

    do {
        printf("乱数%dを生成しました。\n", rand());

        printf("もう一度? はい(1) いいえ(0): ");
        scanf("%d", &retry);

    } while (retry == 1);

    return 0;
}