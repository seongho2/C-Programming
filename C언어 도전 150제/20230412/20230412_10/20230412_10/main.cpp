//10. 시험점수로 학점을 출력하기 A: 100-90 B: 80-89 C: 70-79 D: 60-69 나머지 F
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main()
{
	int x;
	printf("시험 점수를 입력해주세요: \n");
	scanf("%d", &x);

	if (x >= 90)
	{
		printf("이번 시험의 학점은 A입니다.\n");
	}
	else if (x >= 80)
	{
		printf("이번 시험의 학점은 B입니다.\n");
	}
	else if (x >= 70)
	{
		printf("이번 시험의 학점은 C입니다.\n");
	}
	else if (x >= 60)
	{
		printf("이번 시험의 학점은 D입니다.\n");
	}
	else
	{
		printf("이번 시험의 학점은 F입니다.\n");
	}
}