#include <stdio.h>

int main() {
    double largura, comprimento, perimetro, area;

    printf("Digite a largura: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento: ");
    scanf("%lf", &comprimento); 

    perimetro = 2*largura + 2*comprimento;
    area = largura*comprimento;

    printf("Perímetro: %lf, Área: %lf\n", perimetro, area);
    return 0;
}
