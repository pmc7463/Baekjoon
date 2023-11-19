#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    int max, mid, min;

    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    mid = (a + b + c) - max - min;
    printf("%d\n", max + mid);
    
    return 0;
}