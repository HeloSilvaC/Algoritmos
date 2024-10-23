#include <stdio.h>

int main() {

int a, b, c;
float pesoA, pesoB, pesoC, media_simples, media_ponderada;

printf("A: " );
scanf(" %d", &a);

printf("Peso A: " );
scanf(" %f", &pesoA);

printf("B: " );
scanf(" %d", &b);

printf("Peso B: " );
scanf(" %f", &pesoB);

printf("C: " );
scanf(" %d", &c);

printf("Peso C: " );
scanf(" %f", &pesoC);


media_simples = (a+b+c)/3;
media_ponderada = ((a*pesoA)+ (b*pesoB) + (c*pesoC))/(pesoA+pesoB+pesoC);

  printf("\nMédia Simples: %f \n", media_simples);
  printf("Média Ponderada: %f \n", media_ponderada);
  
return 0;
}