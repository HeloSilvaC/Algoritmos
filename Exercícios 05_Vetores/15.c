int max_sum_slice2(int n, int v[]) {
    int max_sum = v[0];
    int soma_atual = v[0];
    
    for (int i = 1; i < n; i++) {
        soma_atual = (soma_atual > 0) ? soma_atual + v[i] : v[i];
        if (soma_atual > max_sum) {
            max_sum = soma_atual;
        }
    }
    return max_sum;
}
