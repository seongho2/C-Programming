//263pg 7-2 while ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n;
	int i = 1;

	printf("����ϰ� ���� ��:");
	scanf("%d", &n);
	while (i <= 9)
	{
		printf("%d*%d = %d \n", n, i, n * i);
		i++;
	}
}