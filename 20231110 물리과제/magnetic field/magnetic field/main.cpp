#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double q, m, B, r;

    printf("���Ϸ�(q)�� �Է��ϼ��� (���� ǥ���): ");
    scanf("%lf", &q);

    printf("����(m)�� �Է��ϼ��� (���� ǥ���): ");
    scanf("%lf", &m);

    printf("�ڱ��� ����(B)�� �Է��ϼ��� (���� ǥ���): ");
    scanf("%lf", &B);

    printf("������(r)�� �Է��ϼ��� (���� ǥ���): ");
    scanf("%lf", &r);

    // �ʱ� �ӷ� ���
    double v = q * B / m;

    // �ڱ�� ���
    double Fm = q * v * B;

    printf("�ʱ� �ӷ� (���� ǥ���): %.2e m/s\n", v);
    printf("�ڱ���� ũ�� (���� ǥ���): %.2e N\n", Fm);

    return 0;
}