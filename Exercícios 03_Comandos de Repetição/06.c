#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;
    float media;

    printf("Informe os números:\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        soma += num;
        cont++;
    }

    if (cont > 0) {
        media = (float)soma / cont;
        printf("Soma: %d\n", soma);
        printf("Média: %.2f\n", media);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
