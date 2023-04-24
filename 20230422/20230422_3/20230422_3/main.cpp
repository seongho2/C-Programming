//20230422 미래모빌리티공학과 202315012 안성호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 14번
{
    int a = 0, b = 1, c, n;

    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}