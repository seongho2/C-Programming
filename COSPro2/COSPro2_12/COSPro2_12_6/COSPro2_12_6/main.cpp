int solution(int korean, int english)
{
    int answer = 0;

    int math = 210 - korean - english;
    // 평균이 70점 이상이 되도록 수학 점수를 조정
    if (math > 100)
    {
        // 수학 점수가 100을 초과하면 조절이 불가능하므로 -1 반환
        answer = -1;
    }
    else
    {
        // 아니면 수학 점수를 반환
        answer = math;
    }

    return answer;
}

int main()
{
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
