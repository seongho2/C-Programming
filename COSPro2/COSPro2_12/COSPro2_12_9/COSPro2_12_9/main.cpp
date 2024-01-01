#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len)
{
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len);

    for (int i = 0; i < score_len; i++)
    {
        answer[i] = 1; // 각 점수별로 초기 순위는 1로 설정
    }

    for (int i = 0; i < score_len; i++)
    {
        for (int j = i + 1; j < score_len; j++)
        {
            if (score[i] < score[j])
            {
                answer[i]++;
            }
            else if (score[i] > score[j])
            {
                answer[j]++;
            }
            // else 부분이 수정되어야 함
            // score[i]와 score[j]가 같을 때, answer[i]를 증가시키지 않고
            // answer[j]를 증가시켜야 함
            else
            {
                answer[j]++;
            }
        }
    }
    return answer;
}

int main()
{
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len1; i++)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", ret1[i]);
    }
    printf("] 입니다.\n");

    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len2; i++)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", ret2[i]);
    }
    printf("] 입니다.\n");
}
