//20230422 미래모빌리티공학과 202315012 안성호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 3번
{
    int num, sum = 0, count = 0;

    while (count < 3) {
        printf("정수를 입력하세요: ");
        scanf("%d", &num);

        if (num < 0) {
            continue;
        }

        sum += num;
        count++;
    }

    printf("입력한 양수의 합은 %d입니다.\n", sum);
}