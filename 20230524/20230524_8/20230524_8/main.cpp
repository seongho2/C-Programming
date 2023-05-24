// 20230524 미래모빌리티공학과 202315012 안성호
// 08. 월급에 붙는 소득세를 계산하는 함수 get_tex(int income)를 작성하고 테스하여보자. 소득 중 1000만 원까지는 8%를 적용하고 
//     1000만 원이 넘는 소득을 10%를 과세한다고 하자. 소득 중에서 1000만 원을 넘는 부분만 10%가 적용된다.
//	   사용자로부터 소득을 받아서 세금을 계산하는 프로그램을 작성하라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_tex(int income)
{
    double tax = 0.0;

    if (income <= 10000000)
    {
        tax = income * 0.08;  
    }
    else 
    {
        tax = 10000000 * 0.08;  
        tax += (income - 10000000) * 0.1;  
    }

    return tax;
}

int main() 
{
    int income;
    printf("월급을 입력하세요: ");
    scanf("%d", &income);

    double tax = get_tex(income);
    printf("소득세: %.2lf 원\n", tax);

    return 0;
}