#include <stdio.h>

// 和と差を計算して、ポインタが指す変数に代入する関数
void sum_diff(int x, int y, int *wa, int *sa) {
    *wa = x + y; // 和を計算してポインタwaが指す変数に代入
    *sa = x - y; // 差を計算してポインタsaが指す変数に代入
}

int main(void) {
    int x, y;
    int wa, sa;

    // ユーザからの入力を受け取る
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // 関数sum_diffを呼び出して和と差を計算
    sum_diff(x, y, &wa, &sa);

    // 結果を表示
    printf("Sum: %d\n", wa);
    printf("Difference: %d\n", sa);

    return 0;
}
