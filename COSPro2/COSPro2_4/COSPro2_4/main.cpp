#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    for (int i = 0; i < height_len; i++)                // i 가로 height_len = 4 이기 때문에 4번 반복
    {
        for (int j = 0; j < height_len; j++)            // j 세로 height_len = 4 이기 때문에 4번 반복
        {
            if (height[i][j] > height[i][j - 1] &&      // 서 이동
                height[i][j] > height[i + 1][j] &&      // 남 이동
                height[i][j] > height[i][j + 1] &&      // 동 이동
                height[i][j] > height[i - 1][j])        // 북 이동
            {             
                count++;                                // 위험지역을 찾았을때 count = ret 값이 ++
            }
        }
    }ㅅ
    return count;
}
int main()
{
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };

    int height_len = 4;

    int ret = solution(height, height_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
