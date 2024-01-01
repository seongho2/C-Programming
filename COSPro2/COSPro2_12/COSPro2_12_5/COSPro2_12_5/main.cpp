int solution(int a, int b)
{
    int answer = 0;

    for (int i = 1; i <= b; i++)
    {
        // a에 i를 곱한 값이 b로 나누어 떨어지면 최소공배수를 찾은 것이므로 그 값을 반환
        if ((a * i) % b == 0)
        {
            answer = a * i;
            break;
        }
    }

    return answer;
}

int main()
{
    int a = 4;
    int b = 6;
    int ret = solution(a, b);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
