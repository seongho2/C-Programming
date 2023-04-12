//9.  정수를 입력 받아서 절대값을 표시하세요. if 조건문 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	
	printf("정수를 입력해 주시오:\n");
	scanf("%d", &x);

	if (x < 0)
	{
		x = -x;
	}
	
	printf("입력한 정수의 절대값 : %d\n", x);
}