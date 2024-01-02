#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// �־��� �ݾ����� ���Ḧ �����ϰ� �� ���� ��� ���ο� ���Ḧ �����ϴ� �Լ�
int solution(int money, int price, int n) {
    // ��� �� �ʱ�ȭ
    int answer = 0;

    // �ʱ� �� �� ����
    int empty_bottle = money / price;

    // �� ���� �̿��Ͽ� ���ο� ���Ḧ �����ϴ� ���� �ݺ�
    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n;
        answer++;
        empty_bottle++;
    }

    // ���� ��� ��ȯ
    return answer;
}
int main() {
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}