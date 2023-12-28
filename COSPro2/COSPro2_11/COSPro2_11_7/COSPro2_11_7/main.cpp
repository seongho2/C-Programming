#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���� ū ���̸� ��ȯ�ϴ� �Լ�
int func_a(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;

    // �� �ε����� ���� �� �迭�� ���̸� ����ϰ�, ��������� �ִ� ���̺��� ũ�� ����
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];

    return answer;
}

// ���� ���� ���̸� ��ȯ�ϴ� �Լ�
int func_b(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;

    // �� �ε����� ���� �� �迭�� ���̸� ����ϰ�, ��������� �ּ� ���̺��� ������ ����
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];

    return answer;
}

// �� ���� �迭�� �޾� ���� ū ���̿� ���� ���� ���̸� ��ȯ�ϴ� �Լ�
int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    // ũ�Ⱑ 2�� ���� �迭 ����
    int* answer = (int*)malloc(sizeof(int) * 2);

    // func_a�� ����� ù ��°�� ����
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);

    // func_b�� ����� �� ��°�� ����
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);

    return answer;
}

int main()
{
    // �־��� ������
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };

    // solution �Լ� ȣ���Ͽ� ��� ���
    int* ret = solution(mid_scores, 3, final_scores, 3);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� [%d, %d] �Դϴ�.\n", ret[0], ret[1]);
}
