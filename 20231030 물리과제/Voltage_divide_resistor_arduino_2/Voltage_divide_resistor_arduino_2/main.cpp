#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Է� ����(V_in), ����(R1) , ����(R2)���� ��� ����(V_out)���ϱ�
int main() 
{
    double V_in, R1, R2, V_out;

    // ����ڷκ��� �Է� �ޱ�
    printf("�Է� ����(V_in): ");
    scanf("%lf", &V_in);

    printf("ù ��° ������ ���� ��(R1, ��): ");
    scanf("%lf", &R1);

    printf("�� ��° ������ ���� ��(R2, ��): ");
    scanf("%lf", &R2);

    // ���� �й� ���
    V_out = V_in * (R2 / (R1 + R2));

    // ��� ���
    printf("��� ����(V_out): %.2lf\n", V_out);

    return 0;
}