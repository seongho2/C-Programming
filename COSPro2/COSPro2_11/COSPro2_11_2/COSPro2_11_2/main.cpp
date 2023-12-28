#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �л� �� ��� �� ���� ����ϰ� �ƹ��� ������� ���� ��츦 Ȯ���ϴ� �Լ�
int func_a(int passed, int non_passed)
{
    return (passed > 1 && non_passed == 0); // ����� �л��� 1�� �̻��̸鼭 ������� ���� �л��� ������ true�� ��ȯ
}

// �־��� �Ӱ谪 �̸��� ���� ���� ���� �Լ�
int func_b(int scores[3])
{
    int answer = 0;
    if (scores[0] < 40)
    {
        answer++; // ù ��° ���� ������ 40 �̸��̸� ����
    }
    if (scores[1] < 44)
    {
        answer++; // �� ��° ���� ������ 44 �̸��̸� ����
    }
    if (scores[2] < 35)
    {
        answer++; // �� ��° ���� ������ 35 �̸��̸� ����
    }
    return answer; // �Ӱ谪 �̸��� ���� ���� ��ȯ
}

// �־��� �Ӱ谪 �̻��� ���� ���� ���� �Լ�
int func_c(int scores[3])
{
    int answer = 0;
    if (scores[0] >= 80)
    {
        answer++; // ù ��° ���� ������ 80 �̻��̸� ����
    }
    if (scores[1] >= 88)
    {
        answer++; // �� ��° ���� ������ 88 �̻��̸� ����
    }
    if (scores[2] >= 70)
    {
        answer++; // �� ��° ���� ������ 70 �̻��̸� ����
    }
    return answer; // �Ӱ谪 �̻��� ���� ���� ��ȯ
}

// �� �л��� ������ �˻��Ͽ� ����� ����ϴ� �Լ�
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
    {
        int passed = func_c(scores[i]); // func_c�� ����Ͽ� ü�� ������ ����� �л� �� ���
        int non_passed = func_b(scores[i]); // func_b�� ����Ͽ� �̴��� �л� �� ���
        answer += func_a(passed, non_passed); // ���� ����� �ջ�
    }
    return answer; // ���� ��� ��ȯ
}

int main() {
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
