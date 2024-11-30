#include <stdio.h>
#include <string.h>

void remove_palindrome(char str[]) {
    int inicio = 0, fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return;
        }
        inicio++;
        fim--;
    }

    if (inicio == fim) {
        str[inicio + 1] = '\0';
    } else {
        str[inicio] = '\0';
    }
}

int main() {
    char text[] = "texto ok!!ko otxet";
    remove_palindrome(text);
    printf("%s\n", text);
    return 0;
}
