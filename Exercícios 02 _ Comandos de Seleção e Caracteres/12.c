#include <stdio.h>

void calculadora_simples() {
    char operador;
    double numero1, numero2, resultado;

    printf("[ CALCULADORA SIMPLEX ]\n");
    printf("Operador (+ - * / %%): ");
    scanf(" %c", &operador);
    
    printf("Número01: ");
    scanf("%lf", &numero1);
    
    printf("Número02: ");
    scanf("%lf", &numero2);

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Erro: Divisão por zero.\n");
                return;
            }
            break;
        case '%':
            resultado = (int)numero1 % (int)numero2;
            break;
        default:
            printf("Operador inválido.\n");
            return;
    }

    printf("Expressão: %.2lf %c %.2lf = %.2lf\n", numero1, operador, numero2, resultado);
}

int main() {
    calculadora_simples();
    return 0;
}
