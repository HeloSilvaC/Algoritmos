int is_sorted(int n, int vet[]) {
    for (int i = 1; i < n; i++) {
        if (vet[i] < vet[i - 1]) {
            return 0;
        }
    }
    return 1;
}