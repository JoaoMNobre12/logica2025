float Soma (float A, float B){
    return A+B;
}

float Subtrair (float A, float B){
    return A-B;
}

float Multiplicar (float A, float B){
    return A*B;
}

float Divisao (float A, float B){
    return A/B;
}

float menuCalculadora (int AB, float A, float B){
    if (AB==1){
        return Soma(A,B);
    }
    else if (AB==2){
        return Subtrair(A,B);
    }
    else if (AB==3){
        return Multiplicar(A,B);
    }
    else if (AB==4){
        return Divisao(A,B);
        
    }
}

#include <stdio.h>

int main (){
    int AB;
    float A, B, Resultado;
    
    printf("Digite o tipo de contar que deseja realizar com base nos números: ");
    scanf("%d", &AB);
    printf("Digite o valor que deseja calcular: ");
    scanf("%f", &A);
    printf("Digite o valor que deseja calcular: ");
    scanf("%f", &B);
    
    Resultado= menuCalculadora(AB, A, B);
    printf("O resultado é %.2f", Resultado);
    
    return 0;
}
