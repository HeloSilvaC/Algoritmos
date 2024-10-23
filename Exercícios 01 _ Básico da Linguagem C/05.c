#include <stdio.h>

int main() {

const float PI = 3.141593;

float graus;

float radianos;

printf("Digite um valor em graus: " );
scanf(" %f", &graus);


radianos = (graus * PI)/180;

  printf("Em radianos: %f \n", radianos);

return 0;
}