#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1001

void processarLinha(char *linha) {
    int len = strlen(linha);

    for (int i = 0; i < len; i++) {
        if (isalpha(linha[i])) {
            linha[i] = linha[i] + 3;
        }
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = linha[i];
        linha[i] = linha[len - 1 - i];
        linha[len - 1 - i] = temp;
    }
    for (int i = len / 2; i < len; i++) {
        linha[i] = linha[i] - 1;
    }
    printf("%s\n", linha);
}
int main() {
    int N;
    char linha[MAX];

    scanf("%d\n", &N); 

    for (int i = 0; i < N; i++) {
        fgets(linha, MAX, stdin);

        linha[strcspn(linha, "\n")] = '\0';

        processarLinha(linha);
    }

    return 0;
}
