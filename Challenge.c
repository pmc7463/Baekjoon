#include <stdio.h>
#include <math.h>

int main() {
    double average1, copyright;
    int album, average;

    scanf("%d %d", &album, &average);

    average1 = average - 0.99;

    copyright = album * average1;

    printf("%0.lf", ceil(copyright));

    return 0;
}