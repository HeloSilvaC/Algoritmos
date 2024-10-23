#include <stdio.h>

void main() {

 int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
    printf("\nPar\n");
    }
    else{
        printf("\nÍmpar\n");
    }

}