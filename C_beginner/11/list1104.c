#include<stdio.h>

int main(void){

    char a[][6] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (int i = 0; i < 3; i++){
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    return 0;
}