#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 입력 전압(V_in), 저항(R1) , 저항(R2)으로 출력 전압(V_out)구하기
int main() 
{
    double V_in, R1, R2, V_out;

    // 사용자로부터 입력 받기
    printf("입력 전압(V_in): ");
    scanf("%lf", &V_in);

    printf("첫 번째 저항의 저항 값(R1, 옴): ");
    scanf("%lf", &R1);

    printf("두 번째 저항의 저항 값(R2, 옴): ");
    scanf("%lf", &R2);

    // 전압 분배 계산
    V_out = V_in * (R2 / (R1 + R2));

    // 결과 출력
    printf("출력 전압(V_out): %.2lf\n", V_out);

    return 0;
}