int solution(int usage)
{
    int answer = 0;

    if (usage > 30)
    {
        // 30을 초과하면 20까지는 430원, 21부터 30까지는 570원, 30 초과는 840원
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    }
    else if (usage > 20)
    {
        // 20을 초과하면 20까지는 430원, 21부터는 넘은만큼만 570원
        answer = 20 * 430 + (usage - 20) * 570;
    }
    else
    {
        // 20 이하면 사용량에 430원을 곱하여 계산
        answer = usage * 430;
    }

    return answer;
}

int main()
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
