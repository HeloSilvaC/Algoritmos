int find_substring(const char str[], const char sub[]) {
    int tam_str = strlen(str);
    int tam_sub = strlen(sub);
    
    for (int i = 0; i <= tam_str - tam_sub; i++) {
        int j;
        for (j = 0; j < tam_sub; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == tam_sub) {
            return 1;
        }
    }
    return 0;
}