#include <ctype.h>
#include <stdio.h>

int count_words(int n, int len, char lines[n][len])
{
    int totalPalavras = 0;
    for (int i = 0; i < n; i++)
    {
        int dentroPalavra = 0;
        for (int j = 0; lines[i][j] != '\0'; j++)
        {
            if (!isspace(lines[i][j]))
            {
                if (!dentroPalavra)
                {
                    totalPalavras++;
                    dentroPalavra = 1;
                }
            }
            else
            {
                dentroPalavra = 0;
            }
        }
    }
    return totalPalavras;
}

int main()
{
    char lines[2][200] = {
        "Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
        "Programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language."};
    int count = count_words(2, 200, lines);
    printf("Numero de palavras: %d\n", count);
}