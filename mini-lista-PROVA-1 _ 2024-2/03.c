#include <stdio.h>
#include <string.h>

void uncompress(int n, int vec[]) {
    int i, j;

    for (i = 0; i < n; i++) {
        if (vec[i] != -1) {
            printf("%d ", vec[i]);
        } else {
            int numero = vec[++i];
            int repeticoes = vec[++i];
            for (j = 0; j < repeticoes; j++) {
                printf("%d ", numero);
            }
        }
    }
    printf("\n");
}

int main() {
int v[] = {1, -1, 2, 3, -1, 3, 2, 4, -1, 6, 3, -1, 5, 12};
uncompress(14, v);
}