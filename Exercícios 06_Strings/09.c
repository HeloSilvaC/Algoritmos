void string_count(const char str[]) {
    int contador[26] = {0};
    int total_letras = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char letra = str[i];
        
        if (letra >= 'A' && letra <= 'Z') {
            letra += ('a' - 'A');
        }
        
        if (letra >= 'a' && letra <= 'z') {
            contador[letra - 'a']++;
            total_letras++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            float percentual = (contador[i] / (float)total_letras) * 100;
            printf("%c x%d (%.0f%%)\n", 'A' + i, contador[i], percentual);
        }
    }
}