#include <stdio.h>
#include <string.h>
#define MAX_PROBLEMAS 26

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        int incorrects[MAX_PROBLEMAS] = {0};
        int solved[MAX_PROBLEMAS] = {0};
        int time_solved[MAX_PROBLEMAS] = {0};
        for (int i = 0; i < N; i++) {
            char problema;
            int tempo;
            char status[10];
            scanf(" %c %d %s", &problema, &tempo, status);
            int idx = problema - 'A';
            if (strcmp(status, "correct") == 0) {
                if (!solved[idx]) {
                    solved[idx] = 1;
                    time_solved[idx] = tempo;
                }
            } else if (strcmp(status, "incorrect") == 0) {
                if (!solved[idx]) {
                    incorrects[idx]++;
                }
            }
        }
        int total_resolvidos = 0;
        int total_tempo = 0;
        for (int i = 0; i < MAX_PROBLEMAS; i++) {
            if (solved[i]) {
                total_resolvidos++;
                total_tempo += time_solved[i] + 20 * incorrects[i];
            }
        }
        printf("%d %d\n", total_resolvidos, total_tempo);
    }

    return 0;
}
