#include <stdio.h>

int factorial(int num) {
    int result = 1;

    for (int i = 1; i <= num; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int N, K;
    int A, B, C;
    int result;

    scanf("%d", &N);
    scanf("%d", &K);

    A = factorial(N);
    B = factorial(K);
    C = factorial(N - K);

    result = A / (B * C);
    printf("%d\n", result);
    
    return 0;
}