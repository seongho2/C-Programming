#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 각 반의 학생 수를 받아서 주어진 정원 m으로 나누고 나머지가 있다면 1을 더하여 최소 필요한 반의 개수를 계산하는 함수
int solution(int classes[], int classes_len, int m)
{
    int answer = 0;

    // 각 반에 대해 반복
    for (int i = 0; i < classes_len; i++)
    {
        // 해당 반의 학생 수를 정원 m으로 나누기
        answer += classes[i] / m;

        // 나머지가 남는 경우 (즉, 정원을 넘어가는 학생이 있는 경우)
        if (classes[i] % m != 0)
            // 필요한 추가 반의 개수를 1 증가
            answer++;
    }

    return answer;
}

int main() {
    // 주어진 데이터
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;

    // solution 함수 호출하여 결과 계산
    int ret = solution(classes, 4, m);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
