#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 박스의 무게가 주어진 범위를 벗어나는 경우의 개수를 반환하는 함수
int solution(int weight, int boxes[], int boxes_len) {
    // 결과 값 초기화
    int answer = 0;

    // 박스 배열을 순회하면서 무게가 주어진 범위를 벗어나는 경우 카운트
    for (int i = 0; i < boxes_len; i++)
        if (weight * 1.1 < boxes[i] || weight * 0.9 > boxes[i])
            answer++;

    // 최종 결과 반환
    return answer;
}
int main() {
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}