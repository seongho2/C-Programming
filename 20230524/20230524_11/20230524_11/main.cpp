// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 11. ����ڿ� ��ǻ�Ͱ� �ֻ��� ���� �Ѵٰ� ����. �ֻ����� �� 3���� ������ �ֻ��� ������ ���Ѵ�. �� ģ ������ ���� ���� �̱�ٰ� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice()
{
    int score = 0;
    for (int i = 0; i < 3; i++)
    {
        int Dice = rand() % 6 + 1;
        score += Dice;
    }
    return score;
}

int main()
{
    srand(time(NULL));

    int userScore = rollDice();
    int computerScore = rollDice();

    printf("������� �ֻ��� ����: %d\n", userScore);
    printf("��ǻ���� �ֻ��� ����: %d\n", computerScore);

    if (userScore > computerScore)
    {
        printf("����ڰ� �̰���ϴ�!\n");
    }
    else if (userScore < computerScore)
    {
        printf("��ǻ�Ͱ� �̰���ϴ�!\n");
    }
    else 
    {
        printf("���º��Դϴ�!\n");
    }
    return 0;
}