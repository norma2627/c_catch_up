#include<stdio.h>

int main(void){

    double z[7];

    for (int i = 0; i < 7; i++){
        z[i] = 0.0;
    }
    for (int i = 0; i < 7; i++){
        printf("z[%d] = %.1f\n", i, z[i]);
    }

    return 0;
}