//277pg 7-2 while 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 0;
	do
	{
		printf("1--새로만들기\n");
		printf("2--파일열기\n");
		printf("3--파일단기\n");
		printf("하나를 선택하시요: ");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("선택된 메뉴=%d \n", i);
}