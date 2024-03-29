#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 주어진 비밀번호가 주어진 규칙을 만족하는지 여부를 반환하는 함수
bool solution(char* password) {
    // 반환할 결과 값 초기화
    bool answer;

    // 대문자, 소문자, 숫자의 개수를 세는 변수 초기화
    int capital_count = 0, small_count = 0, digit_count = 0;

    // 비밀번호를 순회하면서 대문자, 소문자, 숫자의 개수를 세기
    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            capital_count++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            small_count++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit_count++;
    }

    // 대문자가 1개 이상, 소문자가 2개 이상, 숫자가 2개 이상인 경우에만 true로 설정
    if (capital_count >= 1 && small_count >= 2 && digit_count >= 2)
        answer = true;
    else
        answer = false;

    // 결과 반환
    return answer;
}
int main() {
    char* password1 = "helloworld";
    bool ret1 = solution(password1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ? "true" : "false");

    char* password2 = "Hello123";
    bool ret2 = solution(password2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ? "true" : "false");
}