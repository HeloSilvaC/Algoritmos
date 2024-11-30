#include <stdio.h>

int check_symmetric(int d, int m[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < i; j++) {
            if (m[i][j] != m[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int d = 3;
    int m[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    if (check_symmetric(d, m)) {
        printf("Não é simétrica.\n");
    } else {
        printf("É simétrica.\n");
    }

    return 0;
}
