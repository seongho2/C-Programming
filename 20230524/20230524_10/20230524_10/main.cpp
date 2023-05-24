// 20230524 미래모빌리티공학과 202315012 안성호
// 10. 난수(romdom number)는 컴퓨터를 이용한 문제 해결에서 많이 사용된다. 특히 수학적인 분석이 너무 복잡한 경우에
//     시뮬레이션을 사용하면 많은 가상적인 실험을 할 수 있다. 10에서 90까지의 정수를 무작위로 반환하는 함수 randint()를 작성하고 10번 호출하여보자.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
    return (rand() % 81) + 10;
}

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int num = randint();
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}
