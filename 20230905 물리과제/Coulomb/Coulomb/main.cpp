#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define COULOMBS_CONSTANT 8.99e9

int main()
{
    double q1, q2, r, force;
    printf("ù ��° ������ ũ�⸦ �Է��ϼ���: ");
    scanf("%lf", &q1);

    printf("�� ��° ������ ũ�⸦ �Է��ϼ���: ");
    scanf("%lf", &q2);

    printf("�� ���� ������ �Ÿ��� �Է��ϼ���: ");
    scanf("%lf", &r);

    force = (COULOMBS_CONSTANT * fabs(q1 * q2)) / (r * r);

    printf("�� ���� ������ ���� %.2lf N�Դϴ�.\n", force);

    return 0;
}