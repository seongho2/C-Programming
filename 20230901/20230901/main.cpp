#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double q1, q2, r;

    printf("Coulombs��Ģ���� q1 : ");
    scanf("%lf", &q1);

    printf("Coulombs��Ģ���� q2 : ");
    scanf("%lf", &q2);

    printf("Coulombs��Ģ���� r : ");
    scanf("%lf", &r);

    // ����� ��Ģ ���
    double k = 8.9876 * pow(10, 9);  // ��� ���
    double force = k * (q1 * q2) / (r * r);

    printf("Coulombs��Ģ���� F�� ���� : %lf N\n", force);

    return 0;
}