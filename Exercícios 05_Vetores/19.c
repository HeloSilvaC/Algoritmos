void vector_intersection(int n1, int v1[n1], int n2, int v2[n2], int v3[]) {
    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (v1[i] == v2[j]) {
                int n = 0;
                for (int l = 0; l < k; l++) {
                    if (v3[l] == v1[i]) {
                        n = 1;
                        break;
                    }
                }
                if (!n) {
                    v3[k++] = v1[i];
                }
                break;
            }
        }
    }

    while (k < (n1 < n2 ? n1 : n2)) {
        v3[k++] = 0;
    }
}