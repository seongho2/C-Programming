//���� : ���� x�� 20�� ������ ��, x�� ���� y�� ������ ū ��쿡 "x�� ���� y�� ������ Ů�ϴ�."�� ����ϰ�, x�� ���� y�� ������ ���� ��� "x�� ���� y�� ������ �۽��ϴ�."�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
	{
		int x = 20;
		int y;

		printf("y�� ���� �Է����ֽÿ�: \n");
		scanf("%d", &y);

		if (x > y)
		{
			printf("x�� ���� y���� Ů�ϴ�. \n");
		}
		else if (x < y)
		{ 
			printf("x�� ���� y���� �۽��ϴ�. \n");
		}
		else
		{
			printf("x�� y�� ���� �����ϴ�. \n");
		}


	}
