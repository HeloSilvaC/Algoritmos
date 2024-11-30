#include <stdio.h>

int put_totals(int rows, int cols, int m[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        int soma_linha = 0;
        for (int j = 0; j < cols - 1; j++)
        {
            soma_linha += m[i][j];
        }
        m[i][cols - 1] = soma_linha;
    }
}

void print_matrix(int rows, int cols, int m[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[4][5] = {
        {1, 2, 3, 4, 0},
        {2, 4, 6, 8, 0},
        {3, 6, 9, 12, 0}, // O último elemento de cada linha receberá a soma
        {4, 8, 12, 16, 0} // da linha.
    };
    put_totals(4, 5, mat);
    // Após a chamada da função, a matriz ficará desta forma:
    // 1, 2, 3, 4, 10
    // 2, 4, 6, 8, 20
    // 3, 6, 9, 12,30 << O último elemento de cada linha recebeu a soma
    // 4, 8, 12,16,40 da linha.

    put_totals(4, 5, mat);
    print_matrix(4, 5, mat);
}
