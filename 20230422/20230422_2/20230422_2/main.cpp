//20230422 미래모빌리티공학과 202315012 안성호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 10번
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