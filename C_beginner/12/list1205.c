#include<stdio.h>

#define NAME_LEN 64

typedef struct student{
    char name[NAME_LEN];
    int height;
    double weight;
} Student;

int main(void){

    Student takao;

    printf("氏名: ");
    scanf("%s", takao.name);
    printf("身長: ");
    scanf("%s", &takao.height);
    printf("体重: ");
    scanf("%s", &takao.weight);

    printf("氏名=%s\n", takao.name);
    printf("身長=%d\n", takao.height);
    printf("体重=%.lf\n", takao.weight);
    

    return 0;
}