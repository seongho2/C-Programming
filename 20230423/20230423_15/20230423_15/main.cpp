//283pg 7-5 for 문
#include <stdio.h>

void main()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
		sum += i;

	printf("1부터 10까지 정수의 합= %d\n", sum);
}