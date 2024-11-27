void replace_all(int n, int vet[], int elem) {
    for (int i = 0; i < n; i++) {
        if (vet[i] == elem) {
            vet[i] = -1;
        }
    }
}