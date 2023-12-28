#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���ڿ� bundle���� start ��ġ���� n ��ŭ�� �������� ���ڸ� �����Ͽ� ���ο� ���ڿ��� ��ȯ�ϴ� �Լ�
char* func_a(char* bundle, int start, int n)
{
    char* answer = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];
    return answer;
}

// �� ���� ������ �޾� ���Ͽ� ����� �����ϴ� �Լ�
int* func_b(int score1, int score2)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    // score1�� score2�� �޾Ƽ�, �� ���� ���Ͽ� ����� ����
    if (score1 > score2) {
        answer[0] = 1;
        answer[1] = score1;
        // ù ��° ��Ҵ� �� ����� ��Ÿ���� �ڵ�
    }
    else if (score1 < score2) {
        answer[0] = 2;
        answer[1] = score2;
        // �� ��° ��Ҵ� ū ���� �����մϴ�.
    }
    else {
        answer[0] = 0;
        answer[1] = score1;
    }
    return answer;
}

// ���ڿ� card���� �� ���ĺ��� �ƽ�Ű �ڵ尪�� ������ 'a'�� �ƽ�Ű �ڵ尪�� ���� 1�� ���� ���� ��� ���ϴ� �Լ�
int func_c(char* card, int card_length) {
    int answer = 0;
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}

// �־��� ���ǿ� ���� ���ڿ� bundle�� ó���Ͽ� ����� ��ȯ�ϴ� �Լ�
int* solution(int n, char* bundle)
{
    // ���ڿ� bundle���� 0���� n������ ���ڷ� �̷���� ���ο� ���ڿ� a_cards ����
    char* a_cards = func_a(bundle, 0, n);
    // ���ڿ� bundle���� 0���� n������ ���ڷ� �̷���� �� �ٸ� ���ο� ���ڿ� b_cards ����
    char* b_cards = func_a(bundle, 0, n);
    // �� ���ڿ��� ���� func_c�� ����Ͽ� ���ĺ� �ҹ����� �ƽ�Ű �ڵ尪 ���� ���
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);
    // func_b�� ���� a_score�� b_score�� �����Ͽ� ����� ����
    int* answer = func_b(a_score, b_score);
    return answer;
}

int main()
{
    int n = 4;
    char* bundle = "cacdbdedccbb";
    int* ret = solution(n, bundle);

    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] �Դϴ�.\n");
}
