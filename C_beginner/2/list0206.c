#include<stdio.h>

int main(void){

    int n;
    double x;

    n = 9.99;
    x = 9.99;

    printf("int, n: %d\n", n);
    printf("int, n/2: %d\n", n / 2);

    printf("double, x: %f\n", x);
    printf("double, x/2: %f\n", x / 2.0);

    return 0;
}


/* memo
    int型の変数: 整数のみを表現。
    double型の変数: 少数部をもつ実数値も表現。

    型: 性質を秘めた設計図。
    オブジェクト: 設計図である型をもとに作られた実体。

    整数定数: int型
    浮動小数点定数: double型
    


*/