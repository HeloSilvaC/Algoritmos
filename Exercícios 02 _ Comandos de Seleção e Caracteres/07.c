#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", a, b, c);

    return 0;
}
