// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 08. ���޿� �ٴ� �ҵ漼�� ����ϴ� �Լ� get_tex(int income)�� �ۼ��ϰ� �׽��Ͽ�����. �ҵ� �� 1000�� �������� 8%�� �����ϰ� 
//     1000�� ���� �Ѵ� �ҵ��� 10%�� �����Ѵٰ� ����. �ҵ� �߿��� 1000�� ���� �Ѵ� �κи� 10%�� ����ȴ�.
//	   ����ڷκ��� �ҵ��� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.
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
    printf("������ �Է��ϼ���: ");
    scanf("%d", &income);

    double tax = get_tex(income);
    printf("�ҵ漼: %.2lf ��\n", tax);

    return 0;
}