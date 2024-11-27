void vector_concat(int n1, int v1[], int n2, int v2[], int v3[]) {
    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }
    for (int i = 0; i < n2; i++) {
        v3[n1 + i] = v2[i];
    }
}