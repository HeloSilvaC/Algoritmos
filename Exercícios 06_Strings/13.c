void int_to_string(int number, char converted[]) {
    int i = 0;
    int negativo = 0;
    
    if (number < 0) {
        negativo = 1;
        number = -number;
    }

    do {
        converted[i++] = (number % 10) + '0';
        number /= 10;
    } while (number > 0);

    if (negativo) {
        converted[i++] = '-';
    }
    converted[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = converted[j];
        converted[j] = converted[i - j - 1];
        converted[i - j - 1] = temp;
    }
}