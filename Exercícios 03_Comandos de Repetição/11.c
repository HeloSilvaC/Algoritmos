#include <stdio.h>

int main() {
    int numero, original, invertido = 0, resto;

    printf("Informe o número: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }

    if (original == invertido) {
        printf("%d = %d\n", original, invertido);
        printf("Palíndromo!\n");
    } else {
        printf("%d != %d\n", original, invertido);
        printf("Não é palíndromo!\n");
    }

    return 0;
}
