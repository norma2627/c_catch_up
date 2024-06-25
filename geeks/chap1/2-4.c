#include <stdio.h>

void func1(){
    int x = 20;
    static int y = 30;

    x = x + 10;
    y = y + 10;
    printf("Local: %d\nStatic: %d\n", x, y);
}

int main(){
    printf("First call\n");
    func1();
    printf("secound Call\n");
    func1();
    printf("Third call\n");
    func1();
    return 0;
}