//9.  ������ �Է� �޾Ƽ� ���밪�� ǥ���ϼ���. if ���ǹ� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	
	printf("������ �Է��� �ֽÿ�:\n");
	scanf("%d", &x);

	if (x < 0)
	{
		x = -x;
	}
	
	printf("�Է��� ������ ���밪 : %d\n", x);
}