#include <string.h>
#include <stdio.h>

void print_strings_minmax(int n, int len, char list[n][len])
{
    int indiceMenor = 0, indiceMaior = 0;
    size_t menorTamanho = strlen(list[0]);
    size_t maiorTamanho = strlen(list[0]);

    for (int i = 1; i < n; i++)
    {
        size_t tamanhoAtual = strlen(list[i]);
        if (tamanhoAtual < menorTamanho)
        {
            menorTamanho = tamanhoAtual;
            indiceMenor = i;
        }
        if (tamanhoAtual > maiorTamanho)
        {
            maiorTamanho = tamanhoAtual;
            indiceMaior = i;
        }
    }

    printf("Menor: %s\n", list[indiceMenor]);
    printf("Maior: %s\n", list[indiceMaior]);
}

int main()
{
    char v[6][20] = {"Helo", "Paola", "Flávia", "Elisa", "Maria", "Ana"};
    print_strings_minmax(6, 20, v);
}