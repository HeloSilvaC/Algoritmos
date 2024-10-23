#include <stdio.h>

int main() {

const float PI = 3.141593;

float raio, diametro, circunferencia, area;

printf("Digite o raio: " );
scanf(" %f", &raio);


diametro = 2 * raio;
circunferencia = 2 * raio * PI;
area = PI * (raio * raio);

  printf("\nDiâmetro: %f \n", diametro);
  printf("Circunferência: %f \n", circunferencia);
  printf("Área do círculo: %f \n", area);

return 0;
}