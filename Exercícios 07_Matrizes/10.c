#include <stdio.h>

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols],
         int m3[rows][cols])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            printf(" %2d", m3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[2][3] = {
        {1, 20, 3},
        {4, 5, 6}};

    int m2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int m3[2][3];
    sum(2, 3, m1, m2, m3);
}