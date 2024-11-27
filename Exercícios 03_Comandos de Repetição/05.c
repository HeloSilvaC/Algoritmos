#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0, resto;

    printf("Informe o dividendo e o divisor: ");
    scanf("%d %d", &dividendo, &divisor);

    if (divisor == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }

    resto = dividendo;

    while (resto >= divisor) {
        resto -= divisor;
        quociente++;
    }

    printf("Quociente: %d, Resto: %d\n", quociente, resto);

    return 0;
}
