#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int a, b, c;
    int result;

    fgets(input, sizeof(input), stdin);

    sscanf(input, "%d + %d = %d", &a, &b, &c);

    result = a + b;

    if (result == c) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}