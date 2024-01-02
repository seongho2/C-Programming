#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ڽ��� ���԰� �־��� ������ ����� ����� ������ ��ȯ�ϴ� �Լ�
int solution(int weight, int boxes[], int boxes_len) {
    // ��� �� �ʱ�ȭ
    int answer = 0;

    // �ڽ� �迭�� ��ȸ�ϸ鼭 ���԰� �־��� ������ ����� ��� ī��Ʈ
    for (int i = 0; i < boxes_len; i++)
        if (weight * 1.1 < boxes[i] || weight * 0.9 > boxes[i])
            answer++;

    // ���� ��� ��ȯ
    return answer;
}
int main() {
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}