// 7장 연습문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 1번
{
    int n;
    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}
/*
void main()     // 2번
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다", sum);
}
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
void main()     // 4번
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}
void main()     // 5번
{
    int n;
    double r = 0, result = 1.0;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result = result * r;
    }
    printf("결과값은 %f", result);
}
void main()     // 6번
{
    int n = 0, result = 0;

    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i;
    }
    printf("계산값은 %d입니다", result);
}
void main()     // 7번
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void main()     // 8번
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
void main()     // 9번
{
    int num1, num2, lcm, sum;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 * num2;
    while (num2 != 0) {
        int sum = num1 % num2;
        num1 = num2;
        num2 = sum;
    }
    lcm = sum / num1;

    printf("최소공배수는 %d입니다.\n",lcm);
}
void main()     // 10번
{
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
}
void main()     // 11번

void main()     // 12번
{
    int n;
    do {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}
void main()     // 13번
{
    int sum = 0, i = 0;

    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }
    printf("1부터 %d까지의 합이 %d입니다.", i - 1, sum - i);
}
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
void main()     // 15번
{
    int n, r, result = 1;

    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);

    for (int i = n; i >= n - (r + 1); i--)
    {
        result *= i;
    }
    printf("순열의 값은 %d 입니다.", result);
}
void main()     // 16번
{
    int x, n;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    do {
        n = x % 10;
        x /= 10;
        printf("%d", n);
    } while (x != 0);
}
void main()     // 17번
{
    char op;
    int a, b;
    printf("**********");
    printf("\nA----Add");
    printf("\nS----Subtract");
    printf("\nM----Multiply");
    printf("\nD----Divide");
    printf("\nQ----Qutit");
    printf("\n**********");
    do {
        printf("\n연산을 선택하시오: ");
        scanf("%c", &op);

        if (op == 'Q')
            break;
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &a, &b);
        if (op == 'A')
        {
            printf("\n연산의 결과는 %d 입니다\n", a + b);
            break;
        }
        else if (op == 'S')
        {
            printf("\n연산의 결과는 %d 입니다\n", a - b);
            break;
        }
        else if (op == 'M')
        {
            printf("\n연산의 결과는 %d 입니다\n", a * b);
            break;
        }
        else if (op == 'D')
        {
            printf("\n연산의 결과는 %d 입니다\n", a / b);
            break;
        }
    } while (1);
}
*/