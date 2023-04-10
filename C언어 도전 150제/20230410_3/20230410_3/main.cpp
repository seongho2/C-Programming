//문제 : 변수 x에 10을 대입하고 , x에서 5를 빼는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x = 0;
	int y;
	int z=0;
	y = 5;

	printf("x값을 대입해주세요: \n", x);
	scanf("%d", &x);
	z = x - y;
	printf("x값에 5를 뺴면: %d \n", z);
	scanf("%d", &z);

}