// 20230419 �̷������Ƽ���а� 202315012 �ȼ�ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int x, y, op, answer, i;
	srand(time(NULL));

	while (1) {
		x = rand() % 10;
		y = rand() % 10;
		op = rand() % 4;
		if (op == 0)
		{
			printf("%d + %d=", x, y);
			scanf("%d", &answer);
			if (x + y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}

		if (op == 1)
		{
			printf("%d - %d=", x, y);
			scanf("%d", &answer);
			if (x - y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}

		if (op == 2)
		{
			printf("%d * %d=", x, y);
			scanf("%d", &answer);
			if (x * y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}

		if (op == 3)
		{
			printf("%d / %d=", x, y);
			scanf("%d", &answer);
			if (x / y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}
		if (op == 4)
		{
			printf("%d % %d=", x, y);
			scanf("%d", &answer);
			if (x / y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}
	}
}