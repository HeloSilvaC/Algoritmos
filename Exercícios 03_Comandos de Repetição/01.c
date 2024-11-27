#include <stdio.h>

void main()
{
    int numero;

    printf("Informe o número de linhas: ");

    scanf("%d", &numero);

    for (int i = numero; i > 0; i--)
    {
        printf("Linha %d\n", i);
    }
}