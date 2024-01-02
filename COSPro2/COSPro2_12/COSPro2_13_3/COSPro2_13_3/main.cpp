#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ������� Ű�� ���� �� ������ ���ϴ� ��� ���� ��ȯ�ϴ� �Լ�
int* solution(int people[], int people_len) {
    // ����� ������ �迭 ���� �Ҵ�
    int* answer = (int*)malloc(sizeof(int) * 4);

    // �Ҵ�� �迭�� 0���� �ʱ�ȭ
    memset(answer, 0, sizeof(int) * 4);

    // �� ������ ���ϴ� ��� �� ���
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

    // ��� �迭�� ������ ��ȯ
    return answer;
}

int main() {
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;
    int* ret = solution(people, people_len);

    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] �Դϴ�.\n");
}