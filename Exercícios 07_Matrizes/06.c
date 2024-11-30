#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_random(int rows, int cols, int m[rows][cols], int min, int max)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int num = rand() % (max - min + 1) + min;

            m[i][j] = num;

            printf(" %2d", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    int v[4][6];
    // matriz deve ser preenchida com valores aleatórios entre 5 e 50
    init_random(4, 6, v, 5, 50); // min=5, max=50
}