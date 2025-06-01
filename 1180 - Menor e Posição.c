#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    int X[N]; 
    int menor, pos;
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);

        if (i == 0) {
            menor = X[i];
            pos = i;
        } else {
            if (X[i] < menor) {
                menor = X[i];
                pos = i;
            }
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
