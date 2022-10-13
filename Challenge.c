#include <stdio.h>

int main() {
    int B1,B2,E1,E2, airplane;

    scanf("%d %d %d %d", &B1, &B2, &E1, &E2);

    airplane = B1 * B2 + E1 * E2;

    printf("%d\n", airplane);

    return 0;
}