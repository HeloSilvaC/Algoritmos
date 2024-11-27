#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b; 
        b = c;    
    }
    return c;
}

int main() {
    int n;
    printf("Digite um número inteiro n (n >= 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Por favor, insira um número maior ou igual a 3.\n");
        return 1;
    }

    int resultado = fibonacci(n);
    printf("O %dº termo da série de Fibonacci é: %d\n", n, resultado);

    return 0;
}
