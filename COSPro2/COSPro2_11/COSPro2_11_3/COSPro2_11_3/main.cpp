#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 문자열 bundle에서 start 위치부터 n 만큼의 간격으로 문자를 추출하여 새로운 문자열을 반환하는 함수
char* func_a(char* bundle, int start, int n)
{
    char* answer = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];
    return answer;
}

// 두 개의 정수를 받아 비교하여 결과를 저장하는 함수
int* func_b(int score1, int score2)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    // score1과 score2를 받아서, 두 수를 비교하여 결과를 저장
    if (score1 > score2) {
        answer[0] = 1;
        answer[1] = score1;
        // 첫 번째 요소는 비교 결과를 나타내는 코드
    }
    else if (score1 < score2) {
        answer[0] = 2;
        answer[1] = score2;
        // 두 번째 요소는 큰 수를 저장합니다.
    }
    else {
        answer[0] = 0;
        answer[1] = score1;
    }
    return answer;
}

// 문자열 card에서 각 알파벳의 아스키 코드값을 가져와 'a'의 아스키 코드값을 빼고 1을 더한 값을 모두 더하는 함수
int func_c(char* card, int card_length) {
    int answer = 0;
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}

// 주어진 조건에 따라서 문자열 bundle을 처리하여 결과를 반환하는 함수
int* solution(int n, char* bundle)
{
    // 문자열 bundle에서 0부터 n까지의 문자로 이루어진 새로운 문자열 a_cards 생성
    char* a_cards = func_a(bundle, 0, n);
    // 문자열 bundle에서 0부터 n까지의 문자로 이루어진 또 다른 새로운 문자열 b_cards 생성
    char* b_cards = func_a(bundle, 0, n);
    // 각 문자열에 대해 func_c를 사용하여 알파벳 소문자의 아스키 코드값 총합 계산
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);
    // func_b에 계산된 a_score와 b_score를 전달하여 결과를 얻음
    int* answer = func_b(a_score, b_score);
    return answer;
}

int main()
{
    int n = 4;
    char* bundle = "cacdbdedccbb";
    int* ret = solution(n, bundle);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}
