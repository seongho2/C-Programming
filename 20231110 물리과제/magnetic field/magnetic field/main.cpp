#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double q, m, B, r;

    printf("전하량(q)을 입력하세요 (지수 표기법): ");
    scanf("%lf", &q);

    printf("질량(m)을 입력하세요 (지수 표기법): ");
    scanf("%lf", &m);

    printf("자기장 세기(B)를 입력하세요 (지수 표기법): ");
    scanf("%lf", &B);

    printf("반지름(r)을 입력하세요 (지수 표기법): ");
    scanf("%lf", &r);

    // 초기 속력 계산
    double v = q * B / m;

    // 자기력 계산
    double Fm = q * v * B;

    printf("초기 속력 (지수 표기법): %.2e m/s\n", v);
    printf("자기력의 크기 (지수 표기법): %.2e N\n", Fm);

    return 0;
}