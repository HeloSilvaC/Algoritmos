void print_string_reversed(char str[]) {
    int tamanho = strlen(str);
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}