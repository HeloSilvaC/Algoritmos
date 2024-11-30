#include <stdio.h>

float average(int rows, int cols, int m[rows][cols])
{
    int cont = 0;
    int soma = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            soma = soma + m[i][j];
            cont++;
        }
    }
    float media = soma / cont;
    printf("Média: %f\n", media);
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    average(3, 3, mat);
}