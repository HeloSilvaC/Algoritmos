#include <string.h>
#include <stdio.h>
#include <ctype.h>

int count_occurrences(int n, int len, char lines[n][len], char word[])
{
    int ocorrencias = 0;
    size_t palavra = strlen(word);

    for (int i = 0; i < n; i++)
    {
        char *ptr = lines[i];
        while ((ptr = strstr(ptr, word)) != NULL)
        {
            if ((ptr == lines[i] || isspace(*(ptr - 1))) &&
                (isspace(*(ptr + palavra)) || *(ptr + palavra) == '\0'))
            {
                ocorrencias++;
            }
            ptr += palavra;
        }
    }
    return ocorrencias;
}

int main()
{
    char lines[5][200] = {
        "Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
        "Programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language.",
        "The source code of a program is written in one or more programming languages.",
        "The purpose of programming is to find a sequence of instructions that will automate the performance of a task for solving a given problem.",
        "The process of programming thus often requires expertise in several different subjects, including knowledge of the application domain, specialized algorithms, and formal logic."};
    int count = count_occurrences(5, 200, lines, "programming");
    printf("Numero de ocorrencias: %d\n", count);
}