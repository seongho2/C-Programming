// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 04. ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha(char c)�� �ۼ��ϰ� �̰��� ȣ���Ͽ��� 
// ����ڰ� �Է��� ���ڰ� ���ĺ�('a'���� 'z'����) ������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
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
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &c);

    num1 = check_alpha(c);

    if (num1)
    {
        printf("�Է��� ���ڴ� ���ĺ��Դϴ�.\n");
    }
    else 
    {
        printf("�Է��� ���ڴ� ���ĺ��� �ƴմϴ�.\n");
    }
    return 0;
}