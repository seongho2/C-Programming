int solution(int usage)
{
    int answer = 0;

    if (usage > 30)
    {
        // 30�� �ʰ��ϸ� 20������ 430��, 21���� 30������ 570��, 30 �ʰ��� 840��
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    }
    else if (usage > 20)
    {
        // 20�� �ʰ��ϸ� 20������ 430��, 21���ʹ� ������ŭ�� 570��
        answer = 20 * 430 + (usage - 20) * 570;
    }
    else
    {
        // 20 ���ϸ� ��뷮�� 430���� ���Ͽ� ���
        answer = usage * 430;
    }

    return answer;
}

int main()
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
