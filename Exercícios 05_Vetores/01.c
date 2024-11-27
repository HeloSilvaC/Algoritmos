void print_even(int n, int vet[]) {

    int par = 0;

    printf("\nNúmeros pares no vetor:\n");
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d\n", vet[i]);
             par = 1;
        }
    }

    if (par == 0)
    {
      printf("Nenhum número par encontrado.\n");
    }
    
}
