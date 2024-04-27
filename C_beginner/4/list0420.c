#include<stdio.h>

int main(void){

    int len;

    puts("左下直角二等辺三角形を表示します。");
    printf("短辺: ");
    scanf("%d", &len);

    for (int i = i; i <= len; i++){
        for (int j = i; j <= i; j++){
            putchar('*');
        }
        putchar("\n");
    }

    return 0;
}