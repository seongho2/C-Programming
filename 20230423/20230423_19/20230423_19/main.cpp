//286pg 7-5 for ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	i = 0;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!�� %d�Դϴ�.\n", n, fact);
}