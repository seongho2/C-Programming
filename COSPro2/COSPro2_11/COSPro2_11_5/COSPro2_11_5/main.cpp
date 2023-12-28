#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 점수에 대해 처리를 수행하여 결과를 반환하는 함수
int solution(int point)
{
    // 만약 점수가 1000 미만이면
    if (point < 1000)
        return 0; // 0을 반환

    // 100으로 나눈 몫에 100을 곱한 값을 반환
    return point / 100 * 100;
}

int main()
{
    // 주어진 데이터
    int point = 2323;

    // solution 함수 호출하여 결과 계산
    int ret = solution(point);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
