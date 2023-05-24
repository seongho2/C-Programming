// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 16. ���࿡ ��ġ�Ǿ� �ִ� ATM ��ġ�� ���α׷����� �����غ���. �����ϴٸ� �ҽ��� ���� �κ��� �Լ��� �����غ���.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 0;

void checkBalance()
{
    printf("�ܰ�� %d ���Դϴ�.\n", balance);
}

// �Ա� �Լ�
void deposit()
{
    int amount;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        balance += amount;
        printf("%d ���� �ԱݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("********** ���� **********\n");
    }
}

// ��� �Լ�
void withdraw()
{
    int amount;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("%d ���� ��ݵǾ����ϴ�.\n", amount);
        printf("�ܰ�� %d �� �Դϴ�.", balance);
    }
    else
    {
        printf("********** ���� **********\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("********** Welcome to Express ATM **********\n");
        printf("<1> �ܾ�\n");
        printf("<2> �Ա�\n");
        printf("<3> ���\n");
        printf("<4> ����\n");
        printf("�޴��� �����Ͻÿ�: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("********** �̿����ּż� �����մϴ�. **********\n");
            return 0;
        default:
            printf("********** ���� **********\n");
        }
        printf("\n");
    }
}
