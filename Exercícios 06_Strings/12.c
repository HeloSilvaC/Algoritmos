void cut_string(char str[], const char word[]) {
    int tam_str = strlen(str);
    int tam_word = strlen(word);
    
    for (int i = 0; i <= tam_str - tam_word; i++) {
        int j;
        for (j = 0; j < tam_word; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == tam_word) {
            str[i + j] = '\0';
            break;
        }
    }
}