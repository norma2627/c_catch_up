#include<stdio.h>

int main(void){

    int month;

    printf("何月ですか: ");
    scanf("%d", &month);

    if (month >= 3 && month <= 5){
        printf("%d月は春です。\n", month);
    }
    else if (month >= 6 && month <= 8){
        printf("%dは夏です。\n", month);
    }
    else if (month >= 9 && month <= 11){
        printf("%dは秋です。\n", month);
    }
    else if (month == 1 || month == 2 || month == 3){
        printf("%dは冬です。\n", month);
    }
    else{
        printf("%dは月ではありません。\n", month);
    }

    return  0;
}