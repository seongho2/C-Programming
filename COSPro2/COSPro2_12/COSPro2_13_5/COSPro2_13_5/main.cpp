#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 주어진 금액으로 음료를 구매하고 빈 병을 모아 새로운 음료를 구매하는 함수
int solution(int money, int price, int n) {
    // 결과 값 초기화
    int answer = 0;

    // 초기 빈 병 개수
    int empty_bottle = money / price;

    // 빈 병을 이용하여 새로운 음료를 구매하는 과정 반복
    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n;
        answer++;
        empty_bottle++;
    }

    // 최종 결과 반환
    return answer;
}
int main() {
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}