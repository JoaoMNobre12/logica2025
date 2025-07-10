#include <stdio.h>
#include <string.h>

int checar_linhas(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        int seen[10] = {0};
        for (int j = 0; j < 9; j++) {
            int val = sudoku[i][j];
            if (val < 1 || val > 9 || seen[val]) return 0;
            seen[val] = 1;
        }
    }
    return 1;
}

int checar_colunas(int sudoku[9][9]) {
    for (int j = 0; j < 9; j++) {
        int seen[10] = {0};
        for (int i = 0; i < 9; i++) {
            int val = sudoku[i][j];
            if (val < 1 || val > 9 || seen[val]) return 0;
            seen[val] = 1;
        }
    }
    return 1;
}

int checar_blocos(int sudoku[9][9]) {
    for (int bloco_linha = 0; bloco_linha < 3; bloco_linha++) {
        for (int bloco_col = 0; bloco_col < 3; bloco_col++) {
            int seen[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int val = sudoku[bloco_linha*3 + i][bloco_col*3 + j];
                    if (val < 1 || val > 9 || seen[val]) return 0;
                    seen[val] = 1;
                }
            }
        }
    }
    return 1;
}

int verificar_sudoku(int sudoku[9][9]) {
    if (!checar_linhas(sudoku)) return 0;
    if (!checar_colunas(sudoku)) return 0;
    if (!checar_blocos(sudoku)) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {
        int sudoku[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }
        printf("Instancia %d\n", instancia);
        if (verificar_sudoku(sudoku)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
