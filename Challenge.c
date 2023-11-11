#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;

    do {
        scanf("%d %d", &a, &b);

        c = a * 3 - a - b;
        if (a != 0 && b != 0) 
            printf("%d\n", c);
    } while (a != 0 && b != 0);

    return 0;
} 