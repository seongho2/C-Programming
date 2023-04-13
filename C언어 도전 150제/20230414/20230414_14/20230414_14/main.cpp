/*014. 논리형 변수 이해하기(bool) 문제 : 논리형 변수 b를 정의하고, 
10과 5의 비교값을 저장하고 출력하는 프로그램을 작성하세요*/
#include <stdio.h>
#include <stdbool.h>

void main()
{
	bool b;
	b = 10 > 5;

	printf("b = %d\n", b); // x =1이 나오는 이유는 10 > 5 가 참이기 때문이다.(참인 경우 1, 거짓인 경우 0)
}