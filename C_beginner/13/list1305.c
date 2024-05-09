#include<stdio.h>

int main(void){

    FILE *fp;
    char fname[FILENAME_MAX];

    print("ファイル名:");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        int ch;
        while ((ch = fget(fp)) != EOF){
            putchr(ch);
        }
        fclose(fp);
    }

    return 0;
}