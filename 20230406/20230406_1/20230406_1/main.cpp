﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cm = 0, ft = 0;
	double inch;

	printf("키를 입력하시오; ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	ft = inch / 12;
	inch = inch - ft * 12;
	printf("%dcm는 %d피트 %.2f인치 입니다.\n", cm, ft, inch);

	return 0;
}