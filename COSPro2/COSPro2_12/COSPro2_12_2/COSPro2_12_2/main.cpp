int func_a(int time_table[], int time_table_len)
{
    int answer = 0;
    // 끝에서부터 처음으로 가면서 1인 수업의 인덱스를 찾음
    for (int i = time_table_len - 1; i >= 0; i--)
    {
        if (time_table[i] == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(int time_table[], int class1, int class2)
{
    int answer = 0;
    // 첫 수업부터 끝 수업까지의 공강을 계산
    for (int i = class1; i < class2; i++)
    {
        if (time_table[i] == 0)
        {
            answer++;
        }
    }
    return answer;
}

int func_c(int time_table[], int time_table_len)
{
    int answer = 0;
    // 처음부터 끝까지 가면서 1인 수업의 인덱스를 찾음
    for (int i = 0; i < time_table_len; i++)
    {
        if (time_table[i] == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int solution(int time_table[], int time_table_len)
{
    int answer = 0;
    int first_class = func_c(time_table, time_table_len);
    int last_class = func_a(time_table, time_table_len);
    answer = func_b(time_table, first_class, last_class);
    // 첫 수업부터 끝 수업까지의 공강을 계산하여 반환
    return answer;
}

int main()
{
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
    int time_table_len = 10;
    int ret = solution(time_table, time_table_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
