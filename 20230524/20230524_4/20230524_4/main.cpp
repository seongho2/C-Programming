// 20230524 미래모빌리티공학과 202315012 안성호
// 04. 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha(char c)를 작성하고 이것을 호출하여서 
// 사용자가 입력한 문자가 알파벳('a'에서 'z'까지) 인지를 판단하여 출력하는 프로그램을 작성하라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;  
    }
    else
    {
        return 0;
    }
}
int main()
{
    char c;
    int num1;
    printf("문자를 입력하세요: ");
    scanf("%c", &c);

    num1 = check_alpha(c);

    if (num1)
    {
        printf("입력한 문자는 알파벳입니다.\n");
    }
    else 
    {
        printf("입력한 문자는 알파벳이 아닙니다.\n");
    }
    return 0;
}