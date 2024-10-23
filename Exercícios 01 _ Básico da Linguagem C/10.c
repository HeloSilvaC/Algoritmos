#include <stdio.h>

int main() {
    int numero;
    printf("Informe o número: ");
    scanf("%d", &numero);

    int resultado1 = numero * 1;
    int resultado2 = numero * 2;
    int resultado3 = numero * 3;
    int resultado4 = numero * 4;
    int resultado5 = numero * 5;
    int resultado6 = numero * 6;
    int resultado7 = numero * 7;
    int resultado8 = numero * 8;
    int resultado9 = numero * 9;
    int resultado10 = numero * 10;


    printf("%d x  1 = %2d   %d x  6 = %2d\n", numero, resultado1, numero, resultado6);
    printf("%d x  2 = %2d   %d x  7 = %2d\n", numero, resultado2, numero, resultado7);
    printf("%d x  3 = %2d   %d x  8 = %2d\n", numero, resultado3, numero, resultado8);
    printf("%d x  4 = %2d   %d x  9 = %2d\n", numero, resultado4, numero, resultado9);
    printf("%d x  5 = %2d   %d x 10 = %2d\n", numero, resultado5, numero, resultado10);

    return 0;
}
