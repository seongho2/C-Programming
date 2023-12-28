#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 학생 중 적어도 한 명은 통과하고 아무도 통과하지 못한 경우를 확인하는 함수
int func_a(int passed, int non_passed)
{
    return (passed > 1 && non_passed == 0); // 통과한 학생이 1명 이상이면서 통과하지 못한 학생이 없으면 true를 반환
}

// 주어진 임계값 미만의 과목 수를 세는 함수
int func_b(int scores[3])
{
    int answer = 0;
    if (scores[0] < 40)
    {
        answer++; // 첫 번째 과목 점수가 40 미만이면 증가
    }
    if (scores[1] < 44)
    {
        answer++; // 두 번째 과목 점수가 44 미만이면 증가
    }
    if (scores[2] < 35)
    {
        answer++; // 세 번째 과목 점수가 35 미만이면 증가
    }
    return answer; // 임계값 미만인 과목 수를 반환
}

// 주어진 임계값 이상의 과목 수를 세는 함수
int func_c(int scores[3])
{
    int answer = 0;
    if (scores[0] >= 80)
    {
        answer++; // 첫 번째 과목 점수가 80 이상이면 증가
    }
    if (scores[1] >= 88)
    {
        answer++; // 두 번째 과목 점수가 88 이상이면 증가
    }
    if (scores[2] >= 70)
    {
        answer++; // 세 번째 과목 점수가 70 이상이면 증가
    }
    return answer; // 임계값 이상인 과목 수를 반환
}

// 각 학생의 점수를 검사하여 결과를 계산하는 함수
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
    {
        int passed = func_c(scores[i]); // func_c를 사용하여 체력 시험을 통과한 학생 수 계산
        int non_passed = func_b(scores[i]); // func_b를 사용하여 미달인 학생 수 계산
        answer += func_a(passed, non_passed); // 계산된 결과를 합산
    }
    return answer; // 최종 결과 반환
}

int main() {
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
