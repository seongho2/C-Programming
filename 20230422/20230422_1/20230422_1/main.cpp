//20230422 �̷������Ƽ���а� 202315012 �ȼ�ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 3��
{
    int num, sum = 0, count = 0;

    while (count < 3) {
        printf("������ �Է��ϼ���: ");
        scanf("%d", &num);

        if (num < 0) {
            continue;
        }

        sum += num;
        count++;
    }

    printf("�Է��� ����� ���� %d�Դϴ�.\n", sum);
}