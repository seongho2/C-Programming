//276pg 7-2 while 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int number, sum = 0;

	do        //루프 몸체가 적어도 한번은 실행한다.
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);
	
	printf("숫자들의 합 = %d\n", sum);
}