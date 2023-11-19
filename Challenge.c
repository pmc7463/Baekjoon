#include <stdio.h>

int main() {
    int N, M , K;

    int n, m;

    scanf("%d %d %d", &N, &M, &K);

    n = K % M;

    m = K / M;

    printf("%d %d", m, n);

    return 0;
}
