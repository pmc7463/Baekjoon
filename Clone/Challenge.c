#include <stdio.h>

int compare(int a, int b, int c, int d) {
    int sum = 0;
    sum = a + b + c + d;
    return sum;
}

int main() {
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;

    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    if (compare(a1, a2, a3, a4) >= compare(b1, b2, b3, b4))
        printf("%d\n", compare(a1, a2, a3, a4));
    else
        printf("%d\n", compare(b1, b2, b3, b4));
        
    return 0;
}