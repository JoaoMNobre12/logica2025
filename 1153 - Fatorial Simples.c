#include <stdio.h>
 
int main()
{
    int N, fatorial=1;
    scanf("%d",&N);
    if (0<N && N<13) {
        for (int i = 1; i <= N; i++) {
                fatorial *= i;}       
        printf("%d\n",fatorial);
        }


    return 0;
}
