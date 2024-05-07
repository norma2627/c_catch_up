#include<ctype.h>
#include<stdio.h>

void str_toupper(char s[]){
    int i = 0;
    while (s[i]){
        s[i] = toupper(s[i]);
        i++;
    }
}