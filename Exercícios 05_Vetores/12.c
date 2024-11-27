void vector_defrag(int n, int vet[]) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] != -1) {
            vet[index++] = vet[i];
        }
    }
    for (int i = index; i < n; i++) {
        vet[i] = -1;
    }
}