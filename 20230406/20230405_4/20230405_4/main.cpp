#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double A, B, C, D;
	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &A);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &B);
	printf("�Ƕ�̵��� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &C);

	D = A * C / B;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�\n", D);
	return 0;
}