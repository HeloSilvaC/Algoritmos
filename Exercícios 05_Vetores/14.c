void merge(int n1, int v1[], int n2, int v2[], int v3[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }
    
    while (i < n1) v3[k++] = v1[i++];
    while (j < n2) v3[k++] = v2[j++];
}