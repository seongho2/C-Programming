#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �� ���� �л� ���� �޾Ƽ� �־��� ���� m���� ������ �������� �ִٸ� 1�� ���Ͽ� �ּ� �ʿ��� ���� ������ ����ϴ� �Լ�
int solution(int classes[], int classes_len, int m)
{
    int answer = 0;

    // �� �ݿ� ���� �ݺ�
    for (int i = 0; i < classes_len; i++)
    {
        // �ش� ���� �л� ���� ���� m���� ������
        answer += classes[i] / m;

        // �������� ���� ��� (��, ������ �Ѿ�� �л��� �ִ� ���)
        if (classes[i] % m != 0)
            // �ʿ��� �߰� ���� ������ 1 ����
            answer++;
    }

    return answer;
}

int main() {
    // �־��� ������
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;

    // solution �Լ� ȣ���Ͽ� ��� ���
    int ret = solution(classes, 4, m);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
