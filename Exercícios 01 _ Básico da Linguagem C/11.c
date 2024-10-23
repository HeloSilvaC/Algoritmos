#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Informe um número: ");
    scanf("%f", &numero);

    printf("Número com 2 casas de precisão: %.2f\n", numero);

    int parte_inteira = (int)numero;
    float parte_decimal = numero - parte_inteira;
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte decimal: %.2f\n", parte_decimal);

    printf("Representação em notação científica: %.2e\n", numero);

    return 0;
}
