#include <stdio.h>

void imprimePorExtenso(int numero) {
    if (numero < 0) {
        printf("menos ");
        numero = -numero;
    }

    if (numero >= 100) {
        if (numero == 100) {
            printf("cem");
        } else {
            printf("%s ", numero / 100 == 2 ? "duzentos" :
                   numero / 100 == 3 ? "trezentos" :
                   numero / 100 == 4 ? "quatrocentos" :
                   numero / 100 == 5 ? "quinhentos" :
                   numero / 100 == 6 ? "seiscentos" :
                   numero / 100 == 7 ? "setecentos" :
                   numero / 100 == 8 ? "oitocentos" :
                   "novecentos");
        }
        numero %= 100;
        if (numero > 0) {
            printf("e ");
        }
    }

    if (numero >= 20) {
        printf("%s ", numero / 10 == 2 ? "vinte" :
               numero / 10 == 3 ? "trinta" :
               numero / 10 == 4 ? "quarenta" :
               numero / 10 == 5 ? "cinquenta" :
               numero / 10 == 6 ? "sessenta" :
               numero / 10 == 7 ? "setenta" :
               numero / 10 == 8 ? "oitenta" :
               "noventa");
        numero %= 10;
        if (numero > 0) {
            printf("e ");
        }
    }

    if (numero > 0) {
        printf("%s", numero == 1 ? "um" :
               numero == 2 ? "dois" :
               numero == 3 ? "três" :
               numero == 4 ? "quatro" :
               numero == 5 ? "cinco" :
               numero == 6 ? "seis" :
               numero == 7 ? "sete" :
               numero == 8 ? "oito" :
               numero == 9 ? "nove" : "");
    } else if (numero == 0) {
        printf("zero");
    }
}

int main() {
    int numero;

        printf("Informe o número entre -999 e 999: ");
        scanf("%d", &numero);

        if (numero >= -999 && numero <= 999) {
            printf("%d > ", numero);
            imprimePorExtenso(numero);
            printf("\n");
        } else {
            printf("Erro: número fora do intervalo permitido (-999 a 999).\n");
        }
    

    return 0;
}
