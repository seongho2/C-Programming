//272pg 7-2 while ��
//while ���� �̿��� �ִ� ����� ���ϱ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x, y, r;

	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);
}