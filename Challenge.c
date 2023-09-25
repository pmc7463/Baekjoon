#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int chicken = 0;
    int a[3];
    int sum = 0;

    scanf("%d", &chicken);
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    for (int i = 0; i < 3; i++) {
        if (a[i] <= chicken) {
            sum += a[i];
        }
        else {
            sum += chicken;
        }
    }

    printf("%d\n", sum);

    return 0;
}