int solution(int taekwondo, int running, int shooting[], int shooting_len)
{
    int answer = 0;

    if (taekwondo >= 25)
    {
        // 25 경기 이상 승리하면 250점 추가
        answer += 250;
    }
    else
    {
        // 그렇지 않으면 각 경기마다 8점씩 추가
        answer += taekwondo * 8;
    }

    // 250 + (60 - running) * 5: 250점 기본점수 + (60분에서 뛴 시간만큼 초과하면 -5씩, 단축하면 +5씩)
    answer += 250 + (60 - running) * 5;

    int count = 0;
    for (int i = 0; i < shooting_len; i++)
    {
        answer += shooting[i];
        // 과녁에 맞춘 점수가 10점인 경우 count 증가
        if (shooting[i] == 10)
        {
            count++;
        }
    }

    if (count >= 7)
    {
        // 10점을 7번 이상 맞추면 100점 추가
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

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
