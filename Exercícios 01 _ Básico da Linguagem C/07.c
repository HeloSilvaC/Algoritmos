#include <stdio.h>

int main() {

int a, b, c;
float media_simples, media_ponderada;

printf("A: " );
scanf(" %d", &a);

printf("B: " );
scanf(" %d", &b);

printf("C: " );
scanf(" %d", &c);


media_simples = (a+b+c)/3;
media_ponderada = ((a*0.1)+ (b*0.5) + (c*0.4))/(0.1+0.5+0.4);

  printf("\nMédia Simples: %f \n", media_simples);
  printf("Média Ponderada: %f \n", media_ponderada);

return 0;
}