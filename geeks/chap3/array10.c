#include <stdio.h>

void printarray(int arr[]){

    printf("Array size: %d\n", sizeof(arr));
    printf("array elemments: ");
    for (int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
}


int main(){

    int arr[5] = { 10, 20, 30, 40, 50};

    printf('%d \n', sizeof(arr));
    printarray(arr);
    
    return 0;
}