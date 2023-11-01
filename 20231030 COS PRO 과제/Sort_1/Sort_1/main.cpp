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
    FILE* file = fopen("in_put.txt", "r"); // 파일 열기
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int numArr[10]; // 배열을 저장할 공간 생성

    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1)
        {
            printf("파일에서 숫자를 읽는 도중 오류가 발생했습니다.\n");
            return 1;
        }
    }

    fclose(file);
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    // 정렬된 결과를 out_put.txt 파일에 저장
    FILE* out_putFile = fopen("out_put.txt", "w");
    if (out_putFile == NULL) {
        printf("파일을 생성할 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(out_putFile, "%d ", numArr[i]);
    }

    fclose(out_putFile);

    printf("정렬된 결과를 out_put.txt 파일에 저장했습니다.\n");

    return 0;
}