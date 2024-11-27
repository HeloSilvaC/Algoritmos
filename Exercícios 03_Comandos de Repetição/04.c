#include <stdio.h>

void main()
{
    int a, b, soma = 0;

    printf("Informe a x b: ");

    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++)
    {
        soma += a;
    }
    printf("%d x %d = %d\n", a, b, soma);
}