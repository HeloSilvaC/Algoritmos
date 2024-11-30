#include <stdio.h>

int matrix_equals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    if (r1 != r2 || c1 != c2)
    {
        return 0;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (m1[i][j] != m2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int mat1[2][3] = {
        {1, 4, 3},
        {4, 5, 6}};

    int mat2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    if (matrix_equals(2, 3, mat1, 2, 3, mat2) == 1)
    {
        printf("Iguais\n");
    }
    else
    {
        printf("Diferentes\n");
    }
}