#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1100
int dividePor2(char *num) {
    int len = strlen(num);
    int resto = 0;

    for (int i = 0; i < len; i++) {
        int digito = num[i] - '0';
        int atual = resto * 10 + digito;
        num[i] = (atual / 2) + '0';
        resto = atual % 2;
    }
    int i = 0;
    while (num[i] == '0' && i < len - 1) i++;
    if (i > 0) memmove(num, num + i, len - i + 1);

    return resto;
}
int contaBits1(char *num) {
    int count = 0;
    while (!(strlen(num) == 1 && num[0] == '0')) {
        count += dividePor2(num);
    }
    return count;
}
int main() {
    int T;
    scanf("%d", &T);
    getchar(); 
    char num[MAX];
    for (int i = 0; i < T; i++) {
        fgets(num, MAX, stdin);
        num[strcspn(num, "\n")] = 0; 
        char temp[MAX];
        strcpy(temp, num);
        int resultado = contaBits1(temp);
        printf("%d\n", resultado);
    }

    return 0;
}
