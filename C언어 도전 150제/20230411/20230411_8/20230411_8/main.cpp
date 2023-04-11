/*동전을 넣으면 음료를 주는 자판기가 있습니다. 우리는 음료수 가격에 일치하는 
돈을 넣으면 음료수가 나왔다고 알려주고, 가격에 미달하는 돈을 넣으면 해당 금액이 반환되었다는 코드를
출력하려고 합니다. 자판기의 모든 음료수의 가격은 500원입니다.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int x;

    printf("돈을 넣어주세요: ");
    scanf("%d", &x);

    if (x >= 500)
 {
        printf("음료수가 나왔습니다.\n");
    if (x > 500)
    {
        printf("%d원이 반환되었습니다.\n", x - 500);
    }
 }
    else
    {
        printf("%d원이 반환되었습니다.\n", x);
    }
}
