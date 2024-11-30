#include <stdio.h>

void print_min_max(int rows, int cols, int m[rows][cols])
{

    int maior = m[1][1];
    int menor = m[1][1];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
            else if (m[i][j] < menor)
            {
                menor = m[i][j];
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    print_min_max(3, 3, mat);
}