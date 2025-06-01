#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        char texto[51];
        int deslocamento;
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0';

        scanf("%d", &deslocamento);
        getchar(); 

        for (int j = 0; texto[j] != '\0'; j++) {
            texto[j] = (texto[j] - 'A' - deslocamento + 26) % 26 + 'A';
        }
        printf("%s\n", texto);
    }
    return 0;
}
