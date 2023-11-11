#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int S, M, L;
    int total;
    scanf("%d %d %d", &S, &M, &L);
    total = 1 * S + 2 * M + 3 * L;
    if (total < 10)
        printf("sad");
    else
        printf("happy");
    return 0;
}