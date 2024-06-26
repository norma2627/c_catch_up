#include <stdio.h>

int main(){

    int arr[5];

    for (int i = 0; i < 5; i++){
        arr[i] = i * i - 2 * i + 1;
    }

    printf("array: ");

    for (int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }

    return 0;
}