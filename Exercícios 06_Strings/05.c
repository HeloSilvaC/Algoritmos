void string_to_upper_copy(const char str[], char resultado[]) {
    int i = 0;
    while (str[i] != '\0') {
        resultado[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - ('a' - 'A') : str[i];
        i++;
    }
    resultado[i] = '\0';
}

int strcmp_plus(const char s1[], const char s2[]) {
    char s1_maiuscula[100], s2_maiuscula[100];
    string_to_upper_copy(s1, s1_maiuscula);
    string_to_upper_copy(s2, s2_maiuscula);
    return strcmp(s1_maiuscula, s2_maiuscula);
}