void string_trim(char str[]) {
    int inicio = 0, fim = strlen(str) - 1;
    
    while (str[inicio] == ' ') {
        inicio++;
    }
    
    while (fim > inicio && str[fim] == ' ') {
        fim--;
    }
    
    int tamanho = fim - inicio + 1;
    for (int i = 0; i < tamanho; i++) {
        str[i] = str[inicio + i];
    }
    str[tamanho] = '\0';
}
