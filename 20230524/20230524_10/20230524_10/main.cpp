// 20230524 �̷������Ƽ���а� 202315012 �ȼ�ȣ
// 10. ����(romdom number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�. Ư�� �������� �м��� �ʹ� ������ ��쿡
//     �ùķ��̼��� ����ϸ� ���� �������� ������ �� �� �ִ�. 10���� 90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͽ�����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
    return (rand() % 81) + 10;
}

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int num = randint();
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}
