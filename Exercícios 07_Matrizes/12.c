#include <stdio.h>

void switch_diagonals(int d, int m1[d][d])
{
    for (int i = 0; i < d; i++)
    {
        int temp = m1[i][i];
        m1[i][i] = m1[i][d - 1 - i];
        m1[i][d - 1 - i] = temp;
    }
}

int main()
{

    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    switch_diagonals(3, m1);

    printf("\nMatriz após trocar as diagonais:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
}