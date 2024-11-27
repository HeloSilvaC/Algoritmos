#include <stdio.h>

int main() {
    int x, d;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("O número é zero, não possui dígitos.\n");
        return 0;
    }

    printf(" x = %d\n", x);
    printf("-------------------\n");

    while (x != 0) {
        d = x % 10;
        printf(" d = %d | x = %d\n", d, x);
        x = x / 10;
    }

    return 0;
}
