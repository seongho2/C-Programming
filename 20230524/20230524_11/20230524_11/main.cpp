// 20230524 미래모빌리티공학과 202315012 안성호
// 11. 사용자와 컴퓨터가 주사위 게임 한다고 하자. 주사위를 각 3번씩 굴려서 주사위 점수를 합한다. 합 친 점수가 높은 쪽이 이긴다고 하자.
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

    printf("사용자의 주사위 점수: %d\n", userScore);
    printf("컴퓨터의 주사위 점수: %d\n", computerScore);

    if (userScore > computerScore)
    {
        printf("사용자가 이겼습니다!\n");
    }
    else if (userScore < computerScore)
    {
        printf("컴퓨터가 이겼습니다!\n");
    }
    else 
    {
        printf("무승부입니다!\n");
    }
    return 0;
}