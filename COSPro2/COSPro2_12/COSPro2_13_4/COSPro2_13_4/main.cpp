#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 카드 정보를 받아 각 조건에 따라 점수를 계산하여 반환하는 함수
int solution(char* cards[][2], int cards_len) {
    // 총 점수 초기화
    int answer = 0;

    // 동일한 숫자가 몇 번 등장하는지 세는 변수
    int count = 0;

    // 첫 번째 카드와 나머지 두 카드 간의 숫자가 일치하는지 확인하여 count 증가
    if (!strcmp(cards[0][0], cards[1][0]))
        count++;
    else if (!strcmp(cards[1][0], cards[2][0]))
        count++;
    else if (!strcmp(cards[0][0], cards[2][0]))
        count++;

    // 각 카드의 숫자를 총 점수에 더함
    for (int i = 0; i < cards_len; i++) {
        answer += atoi(cards[i][1]);
    }

    // count에 따라 점수를 계산하여 반환
    if (count >= 3)
        answer *= 3;
    else if (count >= 1)
        answer *= 2;

    return answer;
}

int main() {
    char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}