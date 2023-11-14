#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float row, col, x, y;
    int cnt = 0;

    int a, b;

    scanf("%f %f %f %f", &col , &row, &x, &y);

    a = ceil(col / (x + 1));
    b = ceil(row / (y + 1));

    //printf("%d\n", a);
    //printf("%d\n", b);
    printf("%d\n", a * b);
    

    return 0;
}