#include<stdio.h>

#define sqr(x) ((x) * (x))

int main(void){

	int n;
	double x;

	printf("整数を入力せよ。: ");
	scanf("%d", &n);
	printf("その数の二乗は%dです。\n", sqr(n));

	printf("実数を入力せよ。: ");
	scanf("%lf", &x);
	printf("その数の二乗は%fです。\n", sqr(x));

	return 0;
}
