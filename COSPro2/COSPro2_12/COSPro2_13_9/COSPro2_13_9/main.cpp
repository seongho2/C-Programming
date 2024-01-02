#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �縻 �迭���� ������ ��ġ�ϴ� �縻�� ������ ����ϴ� �Լ�
int solution(int socks[], int socks_len) {
    // ��� �� �ʱ�ȭ
    int answer = 0;

    // �縻�� ���ڸ� ���� �迭 ���� �Ҵ� �� �ʱ�ȭ
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // �縻 �迭�� ��ȸ�ϸ� �� ������ ������ ����
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // �� ������ ������ 2�� ������ ���� ���� ����Ͽ� ��� ���� ���ϱ�
    for (int i = 0; i < 10; i++)
        answer += (count[i] / 2);

    // �������� �Ҵ��� �迭 �޸� ����
    free(count);

    // ���� ��� ��ȯ
    return answer;
}
int main() {
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}