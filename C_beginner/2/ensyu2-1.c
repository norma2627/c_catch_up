#include <stdio.h>

int main(void){
	int na, nb;

    puts("二つの整数を入力した下さい。");
	printf("整数A:");
    scanf("%d", &na);
	printf("整数B:");
    scanf("%d", &nb);
	printf("Aの値はBの%d%%です。", 100 * na / nb);
	
	return 0;
}