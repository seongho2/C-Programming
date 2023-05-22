#include <stdio.h>

int main()
{
    int matrix[3][3] = {{3, 0, 9},{4, 9, 2},{1, 3, 7}};

    int determinant = 0;

    determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    printf("За·ДЅД: %d\n", determinant);

    return 0;
}
