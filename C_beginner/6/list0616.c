#include<stdio.h>

void mat_add(const int a[4][3], const int b[4][3], int c[4][3]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void mat_print(const int m[4][3]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%4d", m[i][j]);
        }
        putchar('\n');
    }
}

int main(void){

    int tensu1[4][3] = { {52, 62, 72}, {43, 73, 26}, {42, 63, 39}, {59, 29, 59} };
    int tensu2[4][3] = { {39, 42, 42}, {62, 32, 62}, {34, 63, 63}, {72, 73, 84} };
    int sum[4][3];

    mat_add(tensu1, tensu2, sum);

    puts("1");
    mat_print(tensu1);
    puts("2");
    mat_print(tensu2);
    puts("点");
    mat_print(sum);

    return 0;
}