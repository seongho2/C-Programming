//265pg 7-2 while ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	i = 0;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
}
