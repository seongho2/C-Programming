//296pg 7-6 무한루프와 break,continue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
}