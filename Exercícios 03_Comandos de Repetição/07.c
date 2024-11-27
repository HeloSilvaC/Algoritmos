#include <stdio.h>

int main()
{
    int num, maior = -1, menor = -1;

    printf("Informe os números:\n");

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        if (maior == -1 && menor == -1)
        {
            maior = num;
            menor = num;
        }

        else
        {
            if (num > maior)
            {
                maior = num;
            }
            else if (num < menor)
            {
                menor = num;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
