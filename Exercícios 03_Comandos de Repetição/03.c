#include <stdio.h>

void main()
{
    int numero, quadrado = 0, impar = 1;
    printf("Informe um número para mostrar seu quadrado: ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++)
    {
        quadrado += impar;
        impar += 2;
    }

    printf("Quadrado de %d: %d\n", numero, quadrado);
}
