//279pg 7-2 while ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand((unsigned)time(NULL));		//���� �߻��� �õ� ����
	
	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;
	//�ݺ� ����
	do
	{
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("LOW\n");
		if (guess < answer)
			printf("HIGH\n");
	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ��=%d", tries);
}