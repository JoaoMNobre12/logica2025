#include <iostream>
using namespace std;

int calls; 

int fib(int n) {
    calls++; 
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;

        calls = -1;
        int result = fib(X);

        cout << "fib(" << X << ") = " << calls << " calls = " << result << endl;
    }

    return 0;
}
