//294pg 7-6 ���ѷ����� break,continue
#define _CRT_SECURE_NO_WARNINGS
#define SEED_MONEY 1000000
#include <stdio.h>

void main()
{
	int year = 0, money = SEED_MONEY;

	while (1)
	{
		year++;
		money = money * (1 + 0.30);
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("%d��\n", year);
}