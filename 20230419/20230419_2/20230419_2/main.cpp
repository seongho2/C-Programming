// 20230419 미래모빌리티공학과 202315012 안성호
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오: ");
		scanf("%c", &letter);

		if (letter == 'Q')
		break;
		if (letter < 'a' || letter>'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}
}