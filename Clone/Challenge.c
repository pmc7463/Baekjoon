#include <stdio.h>

int main() {
    long x, y, z;

    while (1) {
        long num1, num2, num3;

        scanf("%ld %ld %ld", &x, &y, &z);

        if (x == 0 && y == 0 && z == 0)
            break;

        num1 = x * x, num2 = y * y, num3 = z * z;

        if (num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1)
            printf("right\n");
        else
            printf("wrong\n");
        
    }
    return 0;
}