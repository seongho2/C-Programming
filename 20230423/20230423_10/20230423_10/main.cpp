//274pg 7-2 while ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int halflife;
	double initial;
	double current;
	int years = 0;

	printf("�ݰ��� �Է��Ͻÿ�(��): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� ��=%lf\n", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð�=%d��\n", years);
}