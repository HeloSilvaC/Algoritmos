void string_capitalize(char str[]) {
    int inicio_palavra = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inicio_palavra = 1;
        } else if (inicio_palavra && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
            inicio_palavra = 0;
        } else if (!inicio_palavra && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        } else {
            inicio_palavra = 0;
        }
    }
}