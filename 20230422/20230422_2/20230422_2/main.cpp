//20230422 �̷������Ƽ���а� 202315012 �ȼ�ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 10��
{
    int i, j;
    
    for (j = 2; j < 100; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
}