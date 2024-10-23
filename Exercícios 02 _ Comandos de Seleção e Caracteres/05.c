#include <stdio.h>

void main() {

 float n1, n2, n3, media;

    printf("Informe n1: ");
    scanf("%f", &n1);


    printf("\nInforme n2: ");
    scanf("%f", &n2);


    printf("\nInforme n3: ");
    scanf("%f", &n3);

    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10) && (n3 >= 0 && n3 <= 10)) {
    
     media = (n1 + n2 + n3) / 3;

        printf("Média: %.2f\n", media);
    
    if (media >= 8.5 && media <= 10) {
            printf("\nConceito A\n");
        } 
        else if (media >= 7.0 && media < 8.5) {
            printf("\nConceito B\n");
        } 
        else if (media >= 5.5 && media < 7.0) {
            printf("\nConceito C\n");
        } 
        else if (media >= 0 && media < 5.5) {
            printf("\nConceito F\n");
        }
      else if (media>0,5 && media<0)
        {
            printf("\nConceito F");
        }
    }
    else{
        printf("As notas devem estar no intervalo de 0 a 10.\n");

    }

}