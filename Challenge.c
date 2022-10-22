#include <stdio.h>

int gcd(int x, int y) {
    int temp;

    while (y > 0) {
        temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}

int main() {
    int a , b;
    int input;

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        scanf("%d %d", &a, &b);

        printf("%d\n", (a * b) / gcd(a, b));
    }
    return 0;
}