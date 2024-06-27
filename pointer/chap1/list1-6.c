/* char型とint型とlong型の大きさを表示 */

#include <stdio.h>

int main(void){

    printf("char型: %uバイト\n", (unsigned)sizeof(char));
    printf("int型: %uバイト\n", (unsigned)sizeof(int));
    printf("long型: %uバイト\n", (unsigned)sizeof(long));


    return 0;

}


/*
実行結果

char型: 1バイト
int型: 4バイト
long型: 8バイト

*/