//276pg 7-2 while ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int number, sum = 0;

	do        //���� ��ü�� ��� �ѹ��� �����Ѵ�.
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);
	
	printf("���ڵ��� �� = %d\n", sum);
}