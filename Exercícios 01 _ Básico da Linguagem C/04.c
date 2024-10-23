#include <stdio.h>

int main() {
    int a, b;

    printf("Digite int a: " );
    scanf(" %d", &a);

    printf("Digite int b: " );
    scanf(" %d", &b);

    int multiplicacao = a * b;
    int divisao_int = a / b;
    float divisao_float = a / b;

    printf("\nMultiplicação\n");
    printf("a * b = %d \n", multiplicacao);

    printf("\nDivisão INT\n");
    printf("a \\ b = %d \n", divisao_int);

    printf("\nDivisão FLOAT\n");
    printf("a \\ b = %f \n", divisao_float);

    return 0;
}