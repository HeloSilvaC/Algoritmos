#include <stdio.h>
#include <string.h>

void vec_to_str(int n, int vec[], char str[]) {
    int i;
    char temp[20];
    str[0] = '\0';

    for (i = 0; i < n; i++) {
        if (vec[i] < 0) {
            sprintf(temp, "(%d)", -vec[i]);
        } else {
            sprintf(temp, "%d", vec[i]);
        }

        if (strlen(str) + strlen(temp) + 2 < 20) {
            strcat(str, temp);
            if (i < n - 1) {
                strcat(str, " ");
            }
        }
    }
}

int main() {
    int v[] = {1, 2, -6, 7, 9, -1, 2};
    char st[20];
    vec_to_str(7, v, st);
    printf("%s", st);
    return 0;
}
