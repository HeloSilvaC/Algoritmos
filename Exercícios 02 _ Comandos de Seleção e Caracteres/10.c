#include <stdio.h>

void verificar_letra() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (caractere < 'A' || (caractere > 'Z' && caractere < 'a') || caractere > 'z') {
        printf("O caractere digitado não é uma letra.\n");
    } else {
        if (caractere >= 'a' && caractere <= 'z') {
            caractere -= 'a' - 'A';
        }
        printf("A letra digitada em maiúsculo é: %c\n", caractere);
    }
}

int main() {
    verificar_letra();
    return 0;
}
