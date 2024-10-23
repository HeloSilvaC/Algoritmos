#include <stdio.h>

void imprimirPorExtenso(int num) {
    if (num < 0) {
        printf("menos ");
        num = -num;
    }

    if (num == 0) {
        printf("zero\n");
        return;
    }

    if (num >= 1000) {
        printf("mil ");
        num -= 1000;
    }

    if (num >= 100) {
        if (num == 100) {
            printf("cem ");
        } else {
            switch (num / 100) {
                case 1: printf("cento "); break;
                case 2: printf("duzentos "); break;
                case 3: printf("trezentos "); break;
                case 4: printf("quatrocentos "); break;
                case 5: printf("quinhentos "); break;
                case 6: printf("seiscentos "); break;
                case 7: printf("setecentos "); break;
                case 8: printf("oitocentos "); break;
                case 9: printf("novecentos "); break;
            }
        }
        num %= 100;
    }

    if (num >= 20) {
        switch (num / 10) {
            case 2: printf("vinte "); break;
            case 3: printf("trinta "); break;
            case 4: printf("quarenta "); break;
            case 5: printf("cinquenta "); break;
            case 6: printf("sessenta "); break;
            case 7: printf("setenta "); break;
            case 8: printf("oitenta "); break;
            case 9: printf("noventa "); break;
        }
        num %= 10;
    } else if (num >= 10) {
        switch (num) {
            case 10: printf("dez "); break;
            case 11: printf("onze "); break;
            case 12: printf("doze "); break;
            case 13: printf("treze "); break;
            case 14: printf("quatorze "); break;
            case 15: printf("quinze "); break;
            case 16: printf("dezesseis "); break;
            case 17: printf("dezessete "); break;
            case 18: printf("dezoito "); break;
            case 19: printf("dezenove "); break;
        }
        num = 0;
    }

    if (num >= 1) {
        switch (num) {
            case 1: printf("um\n"); break;
            case 2: printf("dois\n"); break;
            case 3: printf("três\n"); break;
            case 4: printf("quatro\n"); break;
            case 5: printf("cinco\n"); break;
            case 6: printf("seis\n"); break;
            case 7: printf("sete\n"); break;
            case 8: printf("oito\n"); break;
            case 9: printf("nove\n"); break;
        }
    } else {
        printf("\n");
    }
}

void main() {
    int numero;

    printf("Digite um número inteiro (até 4 dígitos): ");
    scanf("%d", &numero);

    imprimirPorExtenso(numero);

}
