#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); 
    while (N--) {
        char linha[201];
        int freq[26] = {0};
        fgets(linha, sizeof(linha), stdin);
        for (int i = 0; linha[i]; i++) {
            if (isalpha(linha[i])) {
                char letra = tolower(linha[i]);
                freq[letra - 'a']++;
            }
        }
        int max_freq = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }
         for (int i = 0; i < 26; i++) {
            if (freq[i] == max_freq) {
                printf("%c", 'a' + i);
            }
        }

        printf("\n");
    }

    return 0;
}
