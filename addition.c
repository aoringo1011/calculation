#include <stdio.h>

int main() {
    int num1, num2, num3, num4, sum;

    // ユーザーに入力を促す
    printf("1つ目の数字を入力してください: ");
    scanf("%d", &num1);

    printf("2つ目の数字を入力してください: ");
    scanf("%d", &num2);

    printf("3つ目の数字を入力してください: ");
    scanf("%d", &num3);

    printf("4つ目の数字を入力してください: ");
    scanf("%d", &num4);

    // 足し算を計算
    sum = num1 + num2 + num3+ num4;

    // 結果を表示
    printf("合計は %d です。\n", sum);

    return 0;
}
