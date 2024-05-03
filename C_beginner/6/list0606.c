#include<stdio.h>

double power(double x, int n){
    double tmp = 1.0;

    while (n-- > 0){
        tmp *= x;
    }
    return tmp;
}


int main(void){
    double a;
    int b;

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("%.2fの%d乗は%.2fです。\n", a, b, power(a, b));

    return 0;
}