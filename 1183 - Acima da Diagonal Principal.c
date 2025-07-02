#include <stdio.h>

int main() {
    char O;
    float M[12][12];
    float soma = 0.0;
    int count = 0;

    scanf("%c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += M[i][j];
            count++;
        }
    }
    if (O == 'M') {
        soma /= count;
    }
    printf("%.1f\n", soma);

    return 0;
}
