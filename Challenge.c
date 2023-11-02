#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    int temp;
    int test;

    scanf("%d", &test);

    for (int i = 0; i < test; i++) {

        scanf("%d %d", &a, &b);

        temp = gcd(a, b);

        printf("%d %d\n", (a * b) / temp, temp);
    }

    return 0;
}