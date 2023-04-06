#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double A, B, C, D;
	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &A);
	printf("지팡이 그림자의 높이를 입력하시오: ");
	scanf("%lf", &B);
	printf("피라미드의 높이를 입력하시오: ");
	scanf("%lf", &C);

	D = A * C / B;
	printf("피라미드의 높이는 %lf입니다\n", D);
	return 0;
}