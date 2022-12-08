#include <stdio.h>
#define PI 3.141592

int main() {
    int rectangle, circle;

    scanf("%d %d", &rectangle, &circle);

    printf("%0.6f\n", (double)rectangle * 2 + circle * 2 * PI);

    return 0;
}