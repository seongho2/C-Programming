#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ������ ���� ó���� �����Ͽ� ����� ��ȯ�ϴ� �Լ�
int solution(int point)
{
    // ���� ������ 1000 �̸��̸�
    if (point < 1000)
        return 0; // 0�� ��ȯ

    // 100���� ���� �� 100�� ���� ���� ��ȯ
    return point / 100 * 100;
}

int main()
{
    // �־��� ������
    int point = 2323;

    // solution �Լ� ȣ���Ͽ� ��� ���
    int ret = solution(point);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
