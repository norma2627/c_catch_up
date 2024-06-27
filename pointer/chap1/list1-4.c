/* ポインタを通じて間接的にオブジェクトに値を代入 */

#include <stdio.h>

int main(void){

    int sv;
    int n1 = 15;
    int n2 = 73;
    int *p;

    printf("n1: %d, n2: %d\n", n1, n2);
    printf("どちらを変更しますか？(n1: 1, n2: 2): ");
    scanf("%d", &sv);

    if (sv == 1){
        p = &n1;
    }
    else {
        p = &n2;
    }

    *p = 99;

    printf("n1: %d, n2: %d\n", n1, n2);

    return 0;
}