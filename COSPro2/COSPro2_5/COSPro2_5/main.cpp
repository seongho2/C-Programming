#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len)  // func_a 함수는 문제에서 각 학생에 대하여 기말고사 점수에서 중간고사 점수를 뺀 값의 최댓값을 구하는 함수이다
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

int func_b(int scores1[], int scores2[], int scores_len)  // func_b 함수는 문제에서 각 학생에 대하여 기말고사 점수에서 중간고사 점수를 뺀 값의 최솟값을 구하는 함수이다
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];
    return answer;
}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) //mid_scores[]: 중간고사 점수 배열, mid_scores_len: 중간고사 점수 배열의 길이, final_scores[]: 기말고사 점수 배열, final_scores_len: 기말고사 점수 배열의 길이
{
    int* answer = (int*)malloc(sizeof(int) * 2);    // 2를 곱하는이유는 malloc(sizeof(int)는 배열의 크기를 2로 지정하기 위해서
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);                               //mid_scores, final_scores → final_scores, mid_scores
    return answer;
}
int main() {
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}