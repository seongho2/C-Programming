//295pg 7-6 무한루프와 break,continue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int x, y;
	for (y = 1; y < 10000; y++)
	{
		for (x = 1; x < 10; x++)
		{
			if (_kbhit())
				goto OUT;
			printf("*");
		}
		printf("\n");
	}
	OUT:
}