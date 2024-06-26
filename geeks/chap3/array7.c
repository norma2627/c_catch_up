#include <stdio.h>

int main(){

    int arr[2][3] = { 10, 20, 30, 40, 50};

    printf("2D array:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}