// 7�� ��������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     // 1��
{
    int n;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}
/*
void main()     // 2��
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�", sum);
}
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
void main()     // 4��
{
    int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}
void main()     // 5��
{
    int n;
    double r = 0, result = 1.0;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &r);
    printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result = result * r;
    }
    printf("������� %f", result);
}
void main()     // 6��
{
    int n = 0, result = 0;

    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i;
    }
    printf("��갪�� %d�Դϴ�", result);
}
void main()     // 7��
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
void main()     // 8��
{
    int n;
    printf("������ �Է��ϼ���: ");
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
void main()     // 9��
{
    int num1, num2, lcm, sum;

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 * num2;
    while (num2 != 0) {
        int sum = num1 % num2;
        num1 = num2;
        num2 = sum;
    }
    lcm = sum / num1;

    printf("�ּҰ������ %d�Դϴ�.\n",lcm);
}
void main()     // 10��
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
void main()     // 11��

void main()     // 12��
{
    int n;
    do {
        printf("������ ����(����: -1): ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (n != -1);
}
void main()     // 13��
{
    int sum = 0, i = 0;

    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }
    printf("1���� %d������ ���� %d�Դϴ�.", i - 1, sum - i);
}
void main()     // 14��
{
    int a = 0, b = 1, c, n;

    printf("���° �ױ��� ���ұ��? ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
void main()     // 15��
{
    int n, r, result = 1;

    printf("n�� ��: ");
    scanf("%d", &n);
    printf("r�� ��: ");
    scanf("%d", &r);

    for (int i = n; i >= n - (r + 1); i--)
    {
        result *= i;
    }
    printf("������ ���� %d �Դϴ�.", result);
}
void main()     // 16��
{
    int x, n;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);
    do {
        n = x % 10;
        x /= 10;
        printf("%d", n);
    } while (x != 0);
}
void main()     // 17��
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
        printf("\n������ �����Ͻÿ�: ");
        scanf("%c", &op);

        if (op == 'Q')
            break;
        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
        scanf("%d %d", &a, &b);
        if (op == 'A')
        {
            printf("\n������ ����� %d �Դϴ�\n", a + b);
            break;
        }
        else if (op == 'S')
        {
            printf("\n������ ����� %d �Դϴ�\n", a - b);
            break;
        }
        else if (op == 'M')
        {
            printf("\n������ ����� %d �Դϴ�\n", a * b);
            break;
        }
        else if (op == 'D')
        {
            printf("\n������ ����� %d �Դϴ�\n", a / b);
            break;
        }
    } while (1);
}
*/