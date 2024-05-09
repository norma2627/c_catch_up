#include<stdio.h>

int main(void){

    FILE *fp;
    double pi = 3.145926;
    
    printf("変数Piから取り出した円周率は%23.21fです。\n", pi);

    if((fp = fopen("PI.bin", "wb")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        fwrite(&pi, sizeof(double), 1, fp);
        fclose(fp);
    }

    if ((fp = fopen("PI.bin", "rb")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        fred(&pi, sizeof(double), 1, fp);
        printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
    }

    return 0;
}