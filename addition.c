#include <stdio.h>

int main() {
    int num1, num2, num3, num4, sum;

    // ���[�U�[�ɓ��͂𑣂�
    printf("1�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num1);

    printf("2�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num2);

    printf("3�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num3);

    printf("4�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num4);

    // �����Z���v�Z
    sum = num1 + num2 + num3+ num4;

    // ���ʂ�\��
    printf("���v�� %d �ł��B\n", sum);

    return 0;
}
