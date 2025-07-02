#include <stdio.h>
#include <string.h>

int eh_vogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main() {
    char risada[51];
    char vogais[51];
    int i, j = 0;

    scanf("%s", risada);
    for (i = 0; risada[i] != '\0'; i++) {
        if (eh_vogal(risada[i])) {
            vogais[j++] = risada[i];
        }
    }
    vogais[j] = '\0';
    int palindromo = 1;
    for (i = 0, j = strlen(vogais) - 1; i < j; i++, j--) {
        if (vogais[i] != vogais[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
