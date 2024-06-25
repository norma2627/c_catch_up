/* グローバル変数 */

#include <stdio.h>

int x = 20;

void func1(){
    printf("Func1: %d\n", x);
}

void func2(){
    printf("func2: %d", x);
}

int main(){
    func1();
    func2();
    return 0;
}