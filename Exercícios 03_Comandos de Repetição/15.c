#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    return (a * b) / mdc;
}

int main() {
    int a, b;

    printf("Informe os numeros: ");
    scanf("%d %d", &a, &b);

    int mmc = calcularMMC(a, b);

    printf("Minimo multiplo comum: %d\n", mmc);

    return 0;
}
