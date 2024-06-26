#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "Hello";

    printf("%s\n", str);

    int length = 0;
    length = strlen(str);

    printf("length of string str is %d", length);

    return 0;

}