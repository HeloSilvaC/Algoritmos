#include <stdio.h>

void main() {
    int num1, num2, num3, num4;
    int maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    
    if (num3 > maior) {
        maior = num3;
    }

    if (num4 > maior) {
        maior = num4;
    }

    printf("\nO maior número digitado é: %d\n", maior);

}
