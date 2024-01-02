#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 주어진 온도 배열에서 A와 B 사이의 인덱스에 있는 값들 중 A와 B보다 큰 값의 개수를 반환하는 함수
int solution(int temperature[], int temperature_len, int A, int B) {
    // 반환할 값 초기화
    int answer = 0;

    // A부터 B까지 반복
    for (int i = A; i < B; i++) {
        // 현재 인덱스의 온도가 A와 B의 온도보다 큰 경우
        if (temperature[i] > temperature[A] && temperature[i] > temperature[B]) {
            answer++;
        }
    }
    return answer;
}
}int main() {
	int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}