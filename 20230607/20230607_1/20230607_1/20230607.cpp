#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100


void main()
{
	int freq[SIZE] = { 0 };
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 30000; i++)
	{
		++freq[rand() % 100];
	}

	printf("============\n");
	printf("����	��\n");
	printf("============\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d		%3d\n", i, freq[i]);
}