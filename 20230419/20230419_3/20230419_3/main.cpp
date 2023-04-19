// 20230419 미래모빌리티공학과 202315012 안성호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    double x, y;
    int op;
    srand(time(NULL)); 

    x = rand() % 10;
    y = rand() % 10;

    op = rand() % 5;

    if (op == 0) {
        printf("%lf + %lf = %lf", x, y, x + y);
    }
    else if (op == 1) {
        printf("%lf - %lf = %lf", x, y, x - y);
    }
    else if (op == 2) {
        printf("%lf * %lf = %lf", x, y, x * y);
    }
    else if (op == 3) 
    {
        printf("%lf / %lf = %lf", x, y, x / y);
    }
    else if (op == 4)
    {
        printf("%lf % %lf = %lf", x, y, x % y);
    }
    else
    {
        printf("error");
    }
}

