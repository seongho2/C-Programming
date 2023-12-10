#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k) 
{
    int answer = 0;
    if (num_apple < 3 * num_carrot)          // 만약 사과의 개수가 당근의 3배보다 작다면 사과의 개수를 리턴
        answer = num_apple;
    else                                     // 만약 사과의 개수가 당근의 3배보다 크다면 당근의 개수를 리턴
        answer = num_carrot;
    num_apple -= 3 * answer;                // num_apple - 3 * answer = num_apple
    num_carrot -= answer;                   // num_carrot - answer = num_carrot


    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)      // 남은 사과와 당근을 토끼 간식을 주기위한 루프 문
        if (i % 4 == 0)                                             // i가 4의 배수가 될때 --
            answer--;
    return answer;
}
int main() {
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}