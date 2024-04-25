#include<stdio.h>

int main(void){

    double x, y;

    puts("2つの整数を入力せよ。");
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scang("%lf", &y);

    printf("x + y : %f\n", x + y);
    printf("x - y : %f\n", x - y);
    printf("x * y : %f\n", x * y);
    printf("x / y : %f\n", x / y);

    return 0;
}


/* memo
    %lf:double型の変数を読み込む際にscanf関数に与えられる変換指定

    
*/
