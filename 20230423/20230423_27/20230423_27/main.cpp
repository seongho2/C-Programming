//297pg 7-6 무한루프와 break,continue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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