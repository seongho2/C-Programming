//279pg 7-2 while 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand((unsigned)time(NULL));		//난수 발생기 시드 결정
	
	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;
	//반복 구조
	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("LOW\n");
		if (guess < answer)
			printf("HIGH\n");
	} while (guess != answer);
	printf("축하합니다. 시도횟수=%d", tries);
}