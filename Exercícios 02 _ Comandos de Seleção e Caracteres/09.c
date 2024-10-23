#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &numero);

    if (numero < 10000 || numero > 99999) {
        printf("O número deve ter exatamente 5 dígitos.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numero % 10);
        numero /= 10;
    }

    return 0;
}
