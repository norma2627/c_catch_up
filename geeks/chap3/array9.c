#include <stdio.h>

int main(){

    int arr[5] = { 10, 20, 30, 40, 50};
    int* ptr = &arr[0];

    printf("address: %p\n element: %p\n", arr, &arr[0]);

    printf("pointer; ");
    for (int i = 0; i < 5; i++){
        printf("%d", *ptr++);
    }

    return 0;

}