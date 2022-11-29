#include <stdio.h>

int main() {
    int a[4], b[2];
    int temp, bmax, sum= 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if (b[0] >= b[1])
        bmax = b[0];
    else
        bmax = b[1];

    for (int i = 0; i < 3; i++) {
        sum += a[i];
    }

    printf("%d\n", sum + bmax);

    return 0;
}