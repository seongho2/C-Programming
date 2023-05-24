// 20230524 미래모빌리티공학과 202315012 안성호
// 16. 은행에 설치되어 있는 ATM 장치를 프로그램으로 구현해보자. 가능하다면 소스의 많은 부분을 함수로 구현해본다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 0;

void checkBalance()
{
    printf("잔고는 %d 원입니다.\n", balance);
}

// 입금 함수
void deposit()
{
    int amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        balance += amount;
        printf("%d 원이 입금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", balance);
    }
    else
    {
        printf("********** 오류 **********\n");
    }
}

// 출금 함수
void withdraw()
{
    int amount;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("%d 원이 출금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", balance);
    }
    else
    {
        printf("********** 오류 **********\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("********** Welcome to Express ATM **********\n");
        printf("<1> 잔액\n");
        printf("<2> 입금\n");
        printf("<3> 출금\n");
        printf("<4> 종료\n");
        printf("메뉴를 선택하시오: ");
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
            printf("********** 이용해주셔서 감사합니다. **********\n");
            return 0;
        default:
            printf("********** 오류 **********\n");
        }
        printf("\n");
    }
}
