#include<stdio.h>

int main(void){

    FILE *fp;
    double pi = 3.145926;

    printf("変数piから取り出した円周率は%23.21fです。\n", pi);

    if ((fp = fopen("PI.txt", "w")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        fprintf(fp, "%f", pi);
        fclose(fp);
    }

    if ((fp = fopen("PI.txt", "r")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        fscanf(fp, "%lf", &pi);
        printf("ファイルから読み取った円周率は%23.21fです.\n", pi);
        fclose(fp);
    }

    return 0;
}