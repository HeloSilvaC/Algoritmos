int vector_insert(int n, int vet1[], int elem) {
    for (int i = 0; i < n; i++) {
        if (vet1[i] == -1) {
            vet1[i] = elem;
            return 1;
        }
    }
    return 0;
}