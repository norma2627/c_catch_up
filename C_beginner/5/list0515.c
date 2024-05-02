#include<stdio.h>

int main(void){
    int tensu1[4][3] = { {91, 82, 92}, {91, 82, 92}, {91, 82, 92},  {91, 82, 92} };
    int tensu2[4][3] = { {91, 82, 92}, {91, 82, 92}, {91, 82, 92},  {91, 82, 92} };
    int sum[4][3];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j] = tensu1[i][j] + tensu2[i][j];
        }
    }

    puts("1回目の点数");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%4d", tensu1[i][j]);
        }
        putchar('\n');
    }

    puts("2回目の点数");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%4d", tensu2[i][j]);
        }
        putchar('\n');
    }

    puts("合計点: ");
     for (int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
        printf("%4d", sum[i][j]);
        }
        putchar('\n');
    }

    return 0;
}