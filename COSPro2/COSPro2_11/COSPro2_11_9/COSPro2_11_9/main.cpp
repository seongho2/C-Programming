#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �������� ��ġ�� ������ ���� ���� �Լ�
int solution(int height[][4], int height_len) {
    int count = 0;

    // 2���� �迭�� ��ȸ�ϸ� �������� ��ġ�� ������ ã��
    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < height_len; j++) {
            // ���� ��ġ�� �������� ��ġ�� �������� Ȯ��
            if (height[i][j] < height[i][j - 1] && height[i][j] < height[i + 1][j] &&
                height[i][j] < height[i][j + 1] && height[i][j] < height[i - 1][j]) {
                count++; // �������� ��ġ�� �����̸� count�� ����
            }
        }
    }

    return count;
}

int main() {
    // 4x4 ũ���� �迭
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;

    // solution �Լ� ȣ���Ͽ� ��� ���
    int ret = solution(height, height_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
