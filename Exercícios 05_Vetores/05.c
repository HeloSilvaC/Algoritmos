void read_vector(int n, int vet[]) {
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
}