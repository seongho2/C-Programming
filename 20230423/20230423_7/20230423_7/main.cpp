//268pg 7-2 while 문
#include <stdio.h>

void main()
{
	int i = 3;

	while (i)
	{
		printf("%d은 참입니다.\n", i);
		i--;
	}
	printf("%d은 거짓입니다.\n", i);
}