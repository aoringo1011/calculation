#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    // ���[�U�[�ɓ��͂𑣂�
    printf("1�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num1);

    printf("2�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num2);

    printf("3�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num3);

    // �����Z���v�Z
    sum = num1 + num2 + num3;

    // ���ʂ�\��
    printf("���v�� %d �ł��B\n", sum);

    return 0;
}
