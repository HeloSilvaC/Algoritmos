#include <stdio.h>

void main() {

 int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if(0>num || num>9){
    printf("\nPrecisa ser entre 0 e 9\n");
    }
    else{
        printf("\nOK!\n");
    }

}