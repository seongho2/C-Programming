/*013. 실수형 변수 이해하기(double) 문제 : 실수형 변수 d를 정의하고
3.141592를 대입하고 출력하는 프로그램을 작성하세요.*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	double d;
	d = M_PI;

	printf("x =%lf\n", d);
}
