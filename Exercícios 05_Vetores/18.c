void vector_union(int n1, int v1[], int n2, int v2[], int v3[]) {
    int k = 0;
    
    for (int i = 0; i < n1; i++) {
        int n = 0;
        for (int j = 0; j < k; j++) {
            if (v3[j] == v1[i]) {
                n = 1;
                break;
            }
        }
        if (!n) v3[k++] = v1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        int n = 0;
        for (int j = 0; j < k; j++) {
            if (v3[j] == v2[i]) {
                n = 1;
                break;
            }
        }
        if (!n) v3[k++] = v2[i];
    }
    
    while (k < n1 + n2) v3[k++] = 0;
}