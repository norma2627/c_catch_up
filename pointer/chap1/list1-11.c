/* 2つの整数値を交換 */

#include <stdio.h>

void swap(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(void){

    int a, b;

    puts("2つの整数を入力してください");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    swap(&a, &b);

    puts("2つの値を交換しました。");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}