#include<stdio.h>

int sqr_int(int x){
	return x * x;
}

double = sqr_double(double x){
	return x * x;
}

int main(void){

	int n;
	double x;

	printf("整数を入力せよ。: ");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr_int(n));

	printf("実数を入力せよ。: ");
	scanf("%d", &x);
	printf("その数の2乗は%fです。\n", sqr_double(x));

	return 0;
}
