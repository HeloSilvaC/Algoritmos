void reverse(int n, int vet[]) {
    for (int i = 0; i < n / 2; i++) {
        int temp = vet[i];
        vet[i] = vet[n - i - 1];
        vet[n - i - 1] = temp;
    }
}