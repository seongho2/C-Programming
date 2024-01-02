#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 양말 배열에서 쌍으로 일치하는 양말의 개수를 계산하는 함수
int solution(int socks[], int socks_len) {
    // 결과 값 초기화
    int answer = 0;

    // 양말의 숫자를 세는 배열 동적 할당 및 초기화
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // 양말 배열을 순회하며 각 숫자의 개수를 세기
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // 각 숫자의 개수를 2로 나누어 쌍의 개수 계산하여 결과 값에 더하기
    for (int i = 0; i < 10; i++)
        answer += (count[i] / 2);

    // 동적으로 할당한 배열 메모리 해제
    free(count);

    // 최종 결과 반환
    return answer;
}
int main() {
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}