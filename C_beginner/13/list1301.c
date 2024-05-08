#include<stdio.h>

int main(void){

    FILE *fp;

    fp = fopen("abc", "r");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
    }
    else{
        printf("ファイルをオープンしました。");
        fclose(fp);
    }

    return 0;
}