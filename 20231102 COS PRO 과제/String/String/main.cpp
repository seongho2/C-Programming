#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h> 

// 39.0 ���ڿ� ����ϱ�
/*
int main()
{
    const char* s1 = "Hello";    // "Hello"�� ���ڿ�, ���ڿ��� " "�� �ѷ���

    printf("%s", s1);     // ���� ����

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strrchr(s1, 'a');

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strchr(s1, 'a');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'a');
    }

    return 0;
}

// 40.1 �Է� ���� �迭 ������ ���ڿ��� �����ϱ�

int main()
{
    char s1[10];    // ũ�Ⱑ 10�� char�� �迭�� ����

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", s1);     // ǥ�� �Է��� �޾Ƽ� �迭 ������ ���ڿ��� ����

    printf("%s\n", s1);  // ���ڿ��� ������ ���

    return 0;
}

int main()
{
    char s1[30];

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]s", s1);    // ������� �����Ͽ� ���ڿ� �Է¹ޱ�

    printf("%s\n", s1);

    return 0;
}
int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strrchr(s1, 'a');

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strstr(s1, "den");

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    char* ptr = strstr(s1, "den");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strstr(ptr + 1, "den");
    }
}
*/
int main()
{
    char s1[30] = "Alice in Wonderland";

    char* ptr = strchr(s1, 'n');

        while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'n');
    }

    return 0;
}
