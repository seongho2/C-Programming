int solution(int stuffs[], int stuffs_len)
{
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++)
    {
        if (stuffs[i] > 3)
        {
            // ������ 4�� �̻��̸� �Ϲ� ī���Ϳ��� ���
            general_counter += stuffs[i];
        }
        else
        {
            // 3�� ������ ���� ���� ī���Ϳ��� ���
            small_counter += stuffs[i];
        }
    }

    // �� ī������ �ð��� ���Ͽ� �� ���� �ɸ� �ð��� ������ ����
    if (small_counter > general_counter)
    {
        answer = small_counter;
    }
    else
    {
        answer = general_counter;
    }

    return answer;
}

int main()
{
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
