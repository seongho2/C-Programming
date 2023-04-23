//286pg 7-5 for 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시요: ");
	scanf("%d", &n);

	i = 0;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!은 %d입니다.\n", n, fact);
}