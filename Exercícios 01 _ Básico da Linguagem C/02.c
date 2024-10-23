#include <stdio.h>

int main() {
    int a, b;

    printf("Digite int a: " );
    scanf(" %d", &a);

    printf("Digite int b: " );
    scanf(" %d", &b);

    int adicao = a + b;
    int subtracao = a - b;

    printf("\nADIÇÃO\n");
    printf("a + b = %d \n", adicao);

    printf("\nSUBTRAÇÃO\n");
    printf("a - b = %d \n", subtracao);

    return 0;
}