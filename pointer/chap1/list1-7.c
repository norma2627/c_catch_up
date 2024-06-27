/* int型とint *型の大きさを表示 */

#include <stdio.h>

int main(void){

    int n;
    int *p;

    printf("int 型%uバイト\n", (unsigned)sizeof(int));
    printf("int *型%uバイト\n", (unsigned)sizeof(int *));

    printf("nは%uバイト\n", (unsigned)sizeof(n));
    printf("*pは%uバイト\n", (unsigned)sizeof(*p));
    printf("pは%uバイト\n", (unsigned)sizeof(p));
    printf("&nは%uバイト\n", (unsigned)sizeof(&n));


    return 0;
}


/*

実行結果

int 型4バイト
int *型8バイト
nは4バイト
*pは4バイト
pは8バイト
&nは8バイト

*/