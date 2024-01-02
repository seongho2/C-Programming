#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 종이의 배열에서 합이 K를 초과하는 첫 번째 종이의 인덱스를 반환하는 함수
int solution(int papers[], int papers_len, int K) {
    // 반환할 값 초기화
    int length = papers_len;

    // 종이 배열을 순회하면서 합이 K를 초과하는지 확인
    for (int i = 0; i < papers_len; i++) {
        K -= papers[i];
        // 합이 K를 초과하는 경우 해당 인덱스 반환
        if (K < 0)
            return i;
    }

    // 모든 종이를 사용해도 K를 초과하지 않는 경우 배열의 길이 반환
    return length;
}


int main() {
	int papers1[] = { 2, 4, 3, 2, 1 };
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int papers2[] = { 2, 4, 3, 2, 1 };
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}