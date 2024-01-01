int solution(int stuffs[], int stuffs_len)
{
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++)
    {
        if (stuffs[i] > 3)
        {
            // 물건이 4개 이상이면 일반 카운터에서 계산
            general_counter += stuffs[i];
        }
        else
        {
            // 3개 이하일 때는 작은 카운터에서 계산
            small_counter += stuffs[i];
        }
    }

    // 두 카운터의 시간을 비교하여 더 많이 걸린 시간을 답으로 선택
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

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
