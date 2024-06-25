/* 自動変数 */

#include <stdio.h>

void func1(){
    
    int x = 10;
    auto int y = 20;
    printf("Auto variable: %d", y);

}

int main(){

    func1();
    return 0;
    
}