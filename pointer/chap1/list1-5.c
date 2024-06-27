/* register記憶域クラス指定子付きで宣言されたオブジェクトのアドレス*/

#include <stdio.h>

int main(void){

    register int n;

    printf("&nの値: %p\n", &n); // エラーとなる

    return 0;
}