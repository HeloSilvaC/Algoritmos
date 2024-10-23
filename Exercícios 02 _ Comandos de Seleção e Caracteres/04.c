#include <stdio.h>

void main() {

 int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("\nO ano é bissexto\n");
    }
    else{
        printf("\nO ano não é bissexto\n");
    }

}