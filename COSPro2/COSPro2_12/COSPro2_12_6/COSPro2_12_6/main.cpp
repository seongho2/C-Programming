int solution(int korean, int english)
{
    int answer = 0;

    int math = 210 - korean - english;
    // ����� 70�� �̻��� �ǵ��� ���� ������ ����
    if (math > 100)
    {
        // ���� ������ 100�� �ʰ��ϸ� ������ �Ұ����ϹǷ� -1 ��ȯ
        answer = -1;
    }
    else
    {
        // �ƴϸ� ���� ������ ��ȯ
        answer = math;
    }

    return answer;
}

int main()
{
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
