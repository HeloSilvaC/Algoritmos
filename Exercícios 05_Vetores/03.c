int find_max(int n, int vet[]) {
    int max = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
        printf("%d \n", max);
    }
    return max;
}