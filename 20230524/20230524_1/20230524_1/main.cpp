// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 01. ������ ���� ������ ����� �ϴ� �Լ����� �ۼ��ϰ�, ����ڷ� ���� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ�����.
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
    printf("������ �Է��Ͻÿ�: %d \n",num1); 
    printf("even()�� ���: %d\n", even(num1));
    printf("absolute()�� ���: %d\n", absolute(num1));
    printf("sign()�� ���: %d\n", sign(num1));
    return 0;
}
