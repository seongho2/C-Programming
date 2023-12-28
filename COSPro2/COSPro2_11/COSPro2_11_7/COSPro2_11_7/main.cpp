#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 가장 큰 차이를 반환하는 함수
int func_a(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;

    // 각 인덱스에 대해 두 배열의 차이를 계산하고, 현재까지의 최대 차이보다 크면 갱신
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];

    return answer;
}

// 가장 작은 차이를 반환하는 함수
int func_b(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;

    // 각 인덱스에 대해 두 배열의 차이를 계산하고, 현재까지의 최소 차이보다 작으면 갱신
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];

    return answer;
}

// 두 점수 배열을 받아 가장 큰 차이와 가장 작은 차이를 반환하는 함수
int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    // 크기가 2인 정수 배열 생성
    int* answer = (int*)malloc(sizeof(int) * 2);

    // func_a의 결과를 첫 번째에 저장
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);

    // func_b의 결과를 두 번째에 저장
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);

    return answer;
}

int main()
{
    // 주어진 데이터
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };

    // solution 함수 호출하여 결과 계산
    int* ret = solution(mid_scores, 3, final_scores, 3);

    // 결과 출력
    printf("solution 함수의 반환 값은 [%d, %d] 입니다.\n", ret[0], ret[1]);
}
