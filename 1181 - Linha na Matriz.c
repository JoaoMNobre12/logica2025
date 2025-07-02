#include <stdio.h>

int main() {
    int L;
    char T;
    float M[12][12];
    float soma = 0.0;

    scanf("%d", &L);
    getchar(); 
    scanf("%c", &T);

    // Lê a matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }
    for (int j = 0; j < 12; j++) {
        soma += M[L][j];
    }
    if (T == 'M') {
        soma /= 12.0;
    }
    printf("%.1f\n", soma);

    return 0;
}
