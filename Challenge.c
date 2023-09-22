#include <stdio.h>
 
int main() {
    int a,  b;
    float c;
    scanf("%d %d", &a, &b);

    c = ((float)a*b)/2;

    printf("%.1f\n", c);
    return 0;
}
