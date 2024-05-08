#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct{
    char name[NAME_LEN];
    int height;
    double weight;
} Student;

void swap_Student(Student *x, Student *y){
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = n - 1; j > i ; j--){
          if (a[j - 1].height > a[j].height){
            swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void){
    Student std[] ={
        {"Sato", 189, 76},
        {"Sanaka", 174, 67},
        {"Oki", 173, 83},
        {"Mike", 195, 84},
        {"Maki", 164, 54},
    };

    for (int i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }
    sort_by_height(std, NUMBER);

    puts("\n身長順にソートしました.");
    for (int i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.lf\n", std[i].name, std[i].weight);
    }

    return 0;
}