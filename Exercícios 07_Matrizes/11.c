#include <stdio.h>

int transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]){
    if (r1 != c2 || c1 != r2) {
        return 0;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            m2[j][i] = m1[i][j];
        }
    }   
}

int main() {
    int m1[2][3] = {
        {1, 2, 3},
        {0, -6, 7}
    };

    int m2[3][2];

    transpose(2, 3, m1, 3, 2, m2);

    printf("Matriz transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
}