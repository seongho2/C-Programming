int solution(int taekwondo, int running, int shooting[], int shooting_len)
{
    int answer = 0;

    if (taekwondo >= 25)
    {
        // 25 ��� �̻� �¸��ϸ� 250�� �߰�
        answer += 250;
    }
    else
    {
        // �׷��� ������ �� ��⸶�� 8���� �߰�
        answer += taekwondo * 8;
    }

    // 250 + (60 - running) * 5: 250�� �⺻���� + (60�п��� �� �ð���ŭ �ʰ��ϸ� -5��, �����ϸ� +5��)
    answer += 250 + (60 - running) * 5;

    int count = 0;
    for (int i = 0; i < shooting_len; i++)
    {
        answer += shooting[i];
        // ���ῡ ���� ������ 10���� ��� count ����
        if (shooting[i] == 10)
        {
            count++;
        }
    }

    if (count >= 7)
    {
        // 10���� 7�� �̻� ���߸� 100�� �߰�
        answer += 100;
    }

    return answer;
}

int main()
{
    int taekwondo = 27;
    int running = 63;
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    int shooting_len = 10;
    int ret = solution(taekwondo, running, shooting, shooting_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
