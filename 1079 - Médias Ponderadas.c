#include <stdio.h>

int main()
{
    int N;
    float ValorR1, ValorR2, ValorR3, media;
    scanf("%d", &N);
    for (int cont =0 ; cont < N; cont++){
        scanf("%f %f %f", &ValorR1, &ValorR2, &ValorR3);
        media=((ValorR1*2)+(ValorR2*3)+(ValorR3*5))/10;
        printf("%.1f\n", media);}
        
    return 0;
}
