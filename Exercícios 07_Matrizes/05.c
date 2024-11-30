#include <stdio.h>

void init_values(int rows, int cols, int m[rows][cols], int start, int step)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = start;
            start = start + step;

            printf(" %2d", m[i][j]);
        }
          printf("\n");
    }
}

int main()
{
    int v[4][6];
    init_values(4, 6, v, 10, 2); // start=10, step=2
    // 10,12,14,16,18,20 << Matriz após chamada da função:
    // 22,24,26,28,30,32
    // 34,36,38,40,42,44
    // 46,48,50,52,54,56
}
