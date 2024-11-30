#include <stdio.h>

int check_upper_triangle(int d, int m[d][d])
{
    for (int i = 1; i < d; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (m[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int m[2][2] = {
        {1, 2},
        {0, 4}};
    int result = check_upper_triangle(2, m);
    if (result = 1)
    {
        printf("Contém um triangulo superior\n");
    }
    else
    {
        printf("Não contém um triangulo superior\n");
    }
}