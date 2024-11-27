void string_report(char str[]) {
    int letras = 0, digitos = 0, simbolos = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letras++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitos++;
        } else if (str[i] >= 32 && str[i] <= 126) {
            simbolos++;
        }
    }
    
    printf("Letras: %d\n", letras);
    printf("Dígitos: %d\n", digitos);
    printf("Símbolos: %d\n", simbolos);
}