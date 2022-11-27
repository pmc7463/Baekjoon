#include <stdio.h>
#define PI 3.14159265359
int main() {
    int radius;

    scanf("%d", &radius);

    printf("%0.6lf\n%0.6lf\n", (double)radius*radius*PI, (double)radius*radius*2);

    return 0;
}