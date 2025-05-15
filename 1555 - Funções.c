#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r, b, c, N;
    
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &x, &y);
        

        r= pow((3*x),2)+pow(y,2);
        b= 2*pow(x,2)+ pow((5*y),2);
        c= -100*x+pow(y,3);
        
        if (r>b && r>c){
            printf("Rafael ganhou\n");
        } else if (b>r && b>c){
            printf("Beto ganhou\n");
        } else if (c>r && c>b) {
            printf("Carlos ganhou\n");
        }
    


    }

    return 0;
}
