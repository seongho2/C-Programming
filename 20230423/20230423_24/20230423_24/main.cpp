//295pg 7-6 ���ѷ����� break,continue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double v;

	while (1)
	{
		printf("�Ǽ����� �Է��Ͻÿ�: ");
		scanf("%lf", &v);

		if (v < 0.0)
			break;
		printf("%lf�� �������� %lf�Դϴ�\n", v, sqrt(v));
	}
}