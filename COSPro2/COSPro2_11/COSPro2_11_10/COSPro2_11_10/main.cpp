#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Ư�� ���� �̻��� ������ ������ ���� �Լ�
int solution(int scores[], int scores_len, int cutline)
{
    int answer = 0;

    // �־��� �迭�� ��ȸ�ϸ� �Ӱ谪 �̻��� ������ ������ ����
    for (int i = 0; i < scores_len; i++)
    {
        // ���� ������ �Ӱ谪 �̻��̸� answer ����
        if (scores[i] >= cutline)
            answer++;
    }

    return answer;
}

int main() {
    // ���÷� ���� ���� �迭�� �Ӱ谪
    int scores[5] = { 80, 90, 55, 60, 59 };
    int scores_len = 5;
    int cutline = 60;

    // solution �Լ� ȣ�� ����� ���
    int ret = solution(scores, scores_len, cutline);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
