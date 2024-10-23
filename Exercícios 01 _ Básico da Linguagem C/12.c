#include <stdio.h>

int main() {
    int total_dias;
    
    printf("Informe o número de dias: ");
    scanf("%d", &total_dias);

    int anos = total_dias / 365;
    int semanas = (total_dias % 365) / 7;
    int dias = (total_dias % 365) % 7;

    printf("%d dias = %d ano(s), %d semana(s) e %d dia(s)\n", total_dias, anos, semanas, dias);

    return 0;
}
