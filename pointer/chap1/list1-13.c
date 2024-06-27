/* printf関数とscanf関数の利用 */

#include <stdio.h>

int main(void){

    int n;
    long k;
    char s[20];

    printf("整数n: ");
    scanf("%d", &n);

    printf("整数k: ");
    scanf("%d", &k);

    printf("文字列s: ");
    scanf("%d", s);

    printf("整数n: %d\n", n);
    printf("整数k: %ld\n", k);
    printf("整数n: %s\n", s);


    return 0;
}