/*6. 예를 들어 학생들에게 파마를 할인해주는 미용실이 있습니다. 
이 미용실에서는 나이가 20세 미만이면 30%를 할인해주며 아닐 경우 정가로 받습니다.
나이를 입력 받아서 할인여부를 표시하세요.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	
	printf("나이를 입력하시오:  \n");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("나이가 20세 미만이므로 30%%를 할인됩니다. \n");
	}
	else
	{
		printf("나이가 20세 이상이므로 할인 혜택 대상이 아닙니다. \n");
	}
}