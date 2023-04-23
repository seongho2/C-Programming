//263pg 7-2 while ¹®
#include <stdio.h>

void main()
{
	int n;

	printf("====================\n");
	printf("    n      nÀÇ Á¦°ö \n");
	printf("====================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d     %5d\n", n, n * n);
		n++;
	}
}