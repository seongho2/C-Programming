//10. ���������� ������ ����ϱ� A: 100-90 B: 80-89 C: 70-79 D: 60-69 ������ F
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main()
{
	int x;
	printf("���� ������ �Է����ּ���: \n");
	scanf("%d", &x);

	if (x >= 90)
	{
		printf("�̹� ������ ������ A�Դϴ�.\n");
	}
	else if (x >= 80)
	{
		printf("�̹� ������ ������ B�Դϴ�.\n");
	}
	else if (x >= 70)
	{
		printf("�̹� ������ ������ C�Դϴ�.\n");
	}
	else if (x >= 60)
	{
		printf("�̹� ������ ������ D�Դϴ�.\n");
	}
	else
	{
		printf("�̹� ������ ������ F�Դϴ�.\n");
	}
}