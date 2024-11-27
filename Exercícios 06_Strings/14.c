int string_to_int(const char number_str[]) {
    int numero = 0;
    int negativo = 0;
    int i = 0;

    if (number_str[0] == '-') {
        negativo = 1;
        i = 1;
    }

    for (; number_str[i] != '\0'; i++) {
        numero = numero * 10 + (number_str[i] - '0');
    }

    if (negativo) {
        numero = -numero;
    }

    return numero;
}