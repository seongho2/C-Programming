//291pg 7-6 ÁßÃ¸ ¹Ýº¹¹®
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y;

	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");

		printf("\n");
	}
}