#include <stdio.h>

int main() {
    int numero, fator = 2, contador;

    printf("Informe o número: ");
    scanf("%d", &numero);

    printf("Fatores primos de %d:\n", numero);

    while (numero > 1) {
        contador = 0;

        while (numero % fator == 0) {
            numero /= fator;
            contador++;
        }

        if (contador > 0) {
            printf("%d x fator %d\n", contador, fator);
        }

        fator++;
    }

    return 0;
}
