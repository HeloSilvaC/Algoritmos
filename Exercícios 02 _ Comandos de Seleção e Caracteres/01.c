#include <stdio.h>

void main() {

 int x;

    printf("Informe X: ");
    scanf("%d", &x);

    if (x<0)
    {
        x = x-(2*x);
    }
    printf("|x| =  %d\n", x);

}