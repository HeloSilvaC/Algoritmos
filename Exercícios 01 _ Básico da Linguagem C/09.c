#include <stdio.h>

int main() {

int a, b, resultado, resto1, resto2;

printf("A: " );
scanf(" %d", &a);

printf("B: " );
scanf(" %d", &b);

resto1 = a % b;

resultado = a/b;
resto2 = a - (resultado * b);

printf("\nResto 1: %d \n", resto1);

printf("\nResto 2: %d \n", resto2);

return 0;
}