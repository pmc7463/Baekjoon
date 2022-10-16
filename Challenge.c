#include <stdio.h>

int hamburger (int a, int b, int c) {
    int min;
    min = ((a < b) && (a < c))? a: ((b < a) && (b < c))? b: c;

    return min;
}

int drink(int d, int e) {
    if(d > e)
        return e;
    else
        return d;
}

int main(void) {
    int a, b, c, d, e;
    int sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = hamburger(a, b, c) + drink(d, e);

    printf("%d\n", sum - 50);
    
    return 0;
}