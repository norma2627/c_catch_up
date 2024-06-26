#include <stdio.h>

int main(){

    char arr[6] = {'G', 'e', 'e', 'k', 's', '\0'};

    int i = 0;
    while (arr[i]){
        printf("%c", arr[i++]);
    }

    return 0;
}