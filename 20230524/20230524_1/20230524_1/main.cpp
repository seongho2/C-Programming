// 20230524 미래모빌리티공학과 202315012 안성호
// 01. 다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로 부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여보자.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n)     // (a)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int absolute(int n)
{
    if (n < 0) 
    {
        return -n;  
    }
    else
    {
        return n;   
    }
}
int sign(int n)
{
    if (n < 0) 
    {
        return -1;  
    }
    else if (n > 0)
    {
        return 1;   
    }
    else
    {
        return 0;   
    }
}
int main(void)
{
    int num1 = 0;
    scanf("%d", &num1);
    printf("정수를 입력하시오: %d \n",num1); 
    printf("even()의 결과: %d\n", even(num1));
    printf("absolute()의 결과: %d\n", absolute(num1));
    printf("sign()의 결과: %d\n", sign(num1));
    return 0;
}
