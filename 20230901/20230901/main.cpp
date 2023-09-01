#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double q1, q2, r;

    printf("Coulombs법칙에서 q1 : ");
    scanf("%lf", &q1);

    printf("Coulombs법칙에서 q2 : ");
    scanf("%lf", &q2);

    printf("Coulombs법칙에서 r : ");
    scanf("%lf", &r);

    // 쿨롱의 법칙 계산
    double k = 8.9876 * pow(10, 9);  // 쿨롱 상수
    double force = k * (q1 * q2) / (r * r);

    printf("Coulombs법칙에서 F의 값은 : %lf N\n", force);

    return 0;
}