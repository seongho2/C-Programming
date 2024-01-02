#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// �־��� ��й�ȣ�� �־��� ��Ģ�� �����ϴ��� ���θ� ��ȯ�ϴ� �Լ�
bool solution(char* password) {
    // ��ȯ�� ��� �� �ʱ�ȭ
    bool answer;

    // �빮��, �ҹ���, ������ ������ ���� ���� �ʱ�ȭ
    int capital_count = 0, small_count = 0, digit_count = 0;

    // ��й�ȣ�� ��ȸ�ϸ鼭 �빮��, �ҹ���, ������ ������ ����
    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            capital_count++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            small_count++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit_count++;
    }

    // �빮�ڰ� 1�� �̻�, �ҹ��ڰ� 2�� �̻�, ���ڰ� 2�� �̻��� ��쿡�� true�� ����
    if (capital_count >= 1 && small_count >= 2 && digit_count >= 2)
        answer = true;
    else
        answer = false;

    // ��� ��ȯ
    return answer;
}
int main() {
    char* password1 = "helloworld";
    bool ret1 = solution(password1);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1 ? "true" : "false");

    char* password2 = "Hello123";
    bool ret2 = solution(password2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2 ? "true" : "false");
}