void set_positive(int n, int vet[]){
    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            vet[i] = -vet[i];
        }
        
        printf("%d \n", vet[i]);
    }
}