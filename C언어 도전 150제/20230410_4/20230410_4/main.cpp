//문제 : 변수 x에 20을 대입한 후, x의 값이 y의 값보다 큰 경우에 "x의 값이 y의 값보다 큽니다."를 출력하고, x의 값이 y의 값보다 작은 경우 "x의 값이 y의 값보다 작습니다."를 출력하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
	{
		int x = 20;
		int y;

		printf("y의 값을 입력해주시오: \n");
		scanf("%d", &y);

		if (x > y)
		{
			printf("x의 값이 y보다 큽니다. \n");
		}
		else if (x < y)
		{ 
			printf("x의 값이 y보다 작습니다. \n");
		}
		else
		{
			printf("x와 y의 값이 같습니다. \n");
		}


	}
