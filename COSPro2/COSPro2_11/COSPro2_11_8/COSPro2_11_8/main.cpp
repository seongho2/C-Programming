#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ĺ��� ��ȣ �迭���� ���ݼ� �̻� ��ǥ ���� �ĺ��� ��ȣ�� ��ȯ�ϴ� �Լ�
int solution(int n, int votes[], int votes_len) {
    int arr[101] = { 0, };

    // ��ǥ �迭�� ��ȸ�ϸ� �� �ĺ����� ��ǥ ���� ����
    for (int i = 0; i < votes_len; i++) {
        arr[votes[i]]++;
    }

    // �� �ĺ����� ��ǥ ���� �˻��Ͽ� ���ݼ� �̻��� �ĺ��� ��ȣ�� ã��
    for (int i = 1; i < n + 1; i++)
        if (arr[i] > votes_len / 2)  // ���ݼ��� ��ǥ�� �ο��� ���ݼ��̾�� �ùٸ� ���� ���´�.
            return i;

    // ���ݼ� �̻��� �ĺ��ڰ� ���� ��� -1 ��ȯ
    return -1;
}

int main() {
    int n1 = 3;
    int votes1[7] = { 1, 2, 1, 3, 1, 2, 1 };
    int votes_len1 = 7;
    int ret1 = solution(n1, votes1, votes_len1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int n2 = 2;
    int votes2[7] = { 2, 1, 2, 1, 2, 2, 1 };
    int votes_len2 = 7;
    int ret2 = solution(n2, votes2, votes_len2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}