#include<stdio.h>

int main(void){

    int len;

    puts("ピラミットを作成します。");
    printf("何段ですか?: ");
    scanf("%d", &len);

    for (int i = len; i <= len; i--){
        for (int j = 1; j <= len - i; j++){
            putchar(' ');
        }
        for (int j = 1; j <= (i - 1) * 2 + 1; j++){
            printf("%d", (len - i + 1 )% 10);
        }
        if (i == 0){
            break;
        }
        putchar('\n');
    }


    return 0;
}