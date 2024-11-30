#include <stdio.h>

void pascal_triangle(int n)
{
    int m[n][n + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        m[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int linhas;
    printf("Número de linhas: ");
    scanf("%d", &linhas);

    pascal_triangle(linhas);
}
