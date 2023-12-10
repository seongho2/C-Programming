#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int* solution(int score[], int score_len)           // 점수의 순위를 정해주는 solution 함수
{
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len); // malloc(sizeof(int))에 score_len곱한 이유는 4바이트 크기에 공간에 score_len 즉 점수의 갯수 만큼을 곱해서 공간을 확보하기 위해

    for (int i = 0; i < score_len; i++) {
        answer[i] = 1;
        for (int j = 0; j < score_len; j++)         // 점수의 크기 비교를 위한 반복문
        {
            if (score[i] < score[j])
                answer[i]++;                        // if의 조건을 수렴한다면 점수의 순위를 ++        
        }
    }
    return answer;
}

int main() {
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len1; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }
    printf("] 입니다.\n");

    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len2; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret2[i]);
    }
    printf("] 입니다.\n");
}