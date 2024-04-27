#include<stdio.h>

int main(void){

    int len;

    puts("左上直角二等辺三角形を表示します。");
    printf("短辺: ");
    scanf("%d", &len);

    for (int i = len; i <= len; i--){
        for (int j = 1; j <= i; j++){
            putchar('*');
        }
        if (i == 0){
            break;
        }
        putchar('\n');
    }

    puts("右上直角二等辺三角形を表示します。");
    printf("短辺: ");
    scanf("%d", &len);

    for (int i = len; i <= len; i--){
        for (int j = 1; j <= len - i; j++){
            putchar('*');
        }
        if (i == 0){
            break;
        }
        putchar('\n');
    }

    return 0;
}