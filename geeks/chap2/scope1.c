#include <stdio.h>

int main(){

    int var = 34;

    printf("%d", var);
    return 0;

}

/*
以下はスコープ外で実行できない
void func1(){

    printf("%d", var);

}

*/
