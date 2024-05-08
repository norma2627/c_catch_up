#include<stdio.h>

int main(void){

    FILE *fp;

    if ((fp = fopen("hw.txt", "r")) == NULL){
        printf("ファイルをオープンできません。\n");
    }
    else {
        int ninzu = 0;
        char name[100];
        double height, weight;
        double hsum = 0.0;
        double wsum = 0.0;
    
        while ( fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3){
            printf("%-10s %5.lf %5.lf\n", name, height, weight);
            ninzu++;
            hsum += height;
            wsum += weight;
        }
        printf("----------------------------\n");
        printf("平均          %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);
    }

    return 0;
}