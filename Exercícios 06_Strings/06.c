int count_words_plus(const char str[]) {
    int palavras = 0, i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ') i++;
        if (str[i] != '\0') palavras++;
        while (str[i] != ' ' && str[i] != '\0') i++;
    }
    return palavras;
}