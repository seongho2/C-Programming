//문제 : 정수형 상수 1과 실수형 상수 3.141592를 더하는 프로그램을 작성하시오.
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	double x = 1;
	double z = 0;

	z = x + M_PI;

	printf(" x + y = %.6lf", z);

}