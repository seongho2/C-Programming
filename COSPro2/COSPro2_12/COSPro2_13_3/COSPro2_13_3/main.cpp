#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 사람들의 키에 따라 각 구간에 속하는 사람 수를 반환하는 함수
int* solution(int people[], int people_len) {
    // 결과를 저장할 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * 4);

    // 할당된 배열을 0으로 초기화
    memset(answer, 0, sizeof(int) * 4);

    // 각 구간에 속하는 사람 수 계산
    for (int i = 0; i < people_len; i++) {
        if (people[i] >= 105)
            answer[3]++;
        else if (people[i] >= 100)
            answer[2]++;
        else if (people[i] >= 95)
            answer[1]++;
        else
            answer[0]++;
    }

    // 결과 배열의 포인터 반환
    return answer;
}

int main() {
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;
    int* ret = solution(people, people_len);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}