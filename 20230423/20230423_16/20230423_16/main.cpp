//284pg 7-5 for ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("====================\n");
	printf("    i     i�� ������\n");
	printf("====================\n");
	for (int i = 1; i <= n; i++)
		printf("%5d      %5d\n", i, i * i * i);
}