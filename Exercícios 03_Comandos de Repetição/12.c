#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    // Entrada do número
    printf("Informe o número: ");
    scanf("%d", &numero);

    // Verificação se o número é primo
    if (numero <= 1) {
        primo = 0;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    // Saída do resultado
    if (primo) {
        printf("Resposta: primo\n");
    } else {
        printf("Resposta: não é primo\n");
    }

    return 0;
}
