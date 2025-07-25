#include <stdio.h>

int main (){
    int Matriz[3][3];
    int i, j, Soma;
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Digite o valor para a matriz [%d][%d]\n", i,j);
            scanf("%d", &Matriz[i][j]);
            Soma+= Matriz[i][j];

        }
    }
    printf("O valor total somado da matriz é de %d", Soma);

  return 0;
}
