int solution(int speed, int cars[], int cars_len)
{
    int answer = 0;

    for (int i = 0; i < cars_len; i++)
    {
        if (cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
        {
            // �ӵ��� 10% �ʰ�, 20% �̸��̸� 3�� ����
            answer += 3;
        }
        else if (cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
        {
            // �ӵ��� 20% �ʰ�, 30% �̸��̸� 5�� ����
            answer += 5;
        }
        else if (cars[i] >= speed * 13 / 10)
        {
            // �ӵ��� 30% �̻��̸� 7�� ����
            answer += 7;
        }
    }

    return answer;
}

int main()
{
    int speed = 100;
    int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
    int cars_len = 7;
    int ret = solution(speed, cars, cars_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
