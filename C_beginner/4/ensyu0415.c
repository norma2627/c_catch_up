#include<stdio.h>

int main(void){

    int min, max, d;
    int temp;

    printf("何cmから: ");
    scanf("%d", &min);
    printf("何cmまで: ");
    scanf("%d", &max);
    printf("何cmごと: ");
    scanf("%d", &d);
    puts("");

    puts("while 文の場合");
    while(min + temp <= max){
        printf("%d cm   %6.2f kg\n", min + temp, ((double)min + temp - 100) * 0.9);
        temp += d;
    }

    return 0;
}