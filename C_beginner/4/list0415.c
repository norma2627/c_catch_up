#include<stdio.h>

int main(void){

    int num;

    printf("整数は何個: ");
    scanf("%d", &num);
    print("終了は-9999\n");

    int i;
    int sum = 0;
    for (i = 0; i < num; i++){
        int tmp;
        printf("No. %d: ", i + 1);
        scanf("%d", &tmp);
        if (tmp == -9999){
            break;
        }
        sum += tmp;
    }

    printf("合計値: %d\n, sum");
    printf("平均値: %.2f\n", (double)sum / i);

    return 0;
}