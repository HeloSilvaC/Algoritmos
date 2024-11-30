#include <stdio.h>

void print_strings(int n, int len, char list[n][len])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", list[i]);
    }
}

int main()
{
    char v[6][20] = {"Helo", "Paola", "Flávia", "Elisa", "Maria", "Ana"};
    print_strings(6, 20, v);
}
