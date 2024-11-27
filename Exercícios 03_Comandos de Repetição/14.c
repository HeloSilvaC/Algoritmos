#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int a, b;

    printf("Informe os numeros: ");
    scanf("%d %d", &a, &b);

    int mdc = calcularMDC(a, b);

    printf("Maximo divisor comum: %d\n", mdc);

    return 0;
}
