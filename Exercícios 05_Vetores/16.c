void count_elements(int n, int vet[]) {
    int max_val = vet[0];
    
    for (int i = 1; i < n; i++) {
        if (vet[i] > max_val) {
            max_val = vet[i];
        }
    }
    
    int count[max_val + 1];
    for (int i = 0; i <= max_val; i++) count[i] = 0;
    for (int i = 0; i < n; i++) count[vet[i]]++;
    
    for (int i = 0; i <= max_val; i++) {
        if (count[i] > 0) {
            printf("%d aparece %d vezes\n", i, count[i]);
        }
    }
}