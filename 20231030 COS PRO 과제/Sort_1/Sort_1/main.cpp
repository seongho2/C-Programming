#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

void bubble_sort(int arr[], int count) {
    int temp;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* file = fopen("in_put.txt", "r"); // ���� ����
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int numArr[10]; // �迭�� ������ ���� ����

    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1)
        {
            printf("���Ͽ��� ���ڸ� �д� ���� ������ �߻��߽��ϴ�.\n");
            return 1;
        }
    }

    fclose(file);
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    // ���ĵ� ����� out_put.txt ���Ͽ� ����
    FILE* out_putFile = fopen("out_put.txt", "w");
    if (out_putFile == NULL) {
        printf("������ ������ �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(out_putFile, "%d ", numArr[i]);
    }

    fclose(out_putFile);

    printf("���ĵ� ����� out_put.txt ���Ͽ� �����߽��ϴ�.\n");

    return 0;
}