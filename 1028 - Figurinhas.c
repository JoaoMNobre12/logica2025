#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    scanf("%d", &N); 

    for (int i = 0; i < N; i++) {
        int F1, F2;
        scanf("%d %d", &F1, &F2);
        printf("%d\n", mdc(F1, F2)); 
    }

    return 0;
}
