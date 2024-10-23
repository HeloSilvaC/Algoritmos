#include <stdio.h>

void identificar_caractere() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            printf("É uma letra e é uma vogal.\n");
        } else {
            printf("É uma letra e é uma consoante.\n");
        }
    } else if (caractere >= '0' && caractere <= '9') {
        printf("É um número.\n");
    } else if (caractere >= 33 && caractere <= 126) {
        printf("É um símbolo.\n");
    } else {
        printf("O caractere digitado não é reconhecido.\n");
    }
}

int main() {
    identificar_caractere();
    return 0;
}
