#include <stdio.h>

int main() {
    int num1, num2, sum;

    // ���[�U�[�ɓ��͂𑣂�
    printf("1�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num1);

    printf("2�ڂ̐�������͂��Ă�������: ");
    scanf("%d", &num2);

    // �����Z���v�Z
    sum = num1 + num2;

    // ���ʂ�\��
    printf("���v�� %d �ł��B\n", sum);

    return 0;
}
