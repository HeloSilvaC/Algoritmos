void distances(int n, int points[]) {
    for (int i = 0; i < n - 2; i += 2) {
        int x1 = points[i];
        int y1 = points[i + 1];
        int x2 = points[i + 2];
        int y2 = points[i + 3];
        
        double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        printf("Distância entre pontos (%d, %d) e (%d, %d): %.2f\n", x1, y1, x2, y2, dist);
    }
}