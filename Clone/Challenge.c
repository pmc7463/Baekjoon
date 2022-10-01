#include <stdio.h>

int GCM(int a, int b) {
    if (a >= b) {
        while (1) {
            if (a % b == 0) 
                return b;
            else
                return GCM(a %= b, b);
        }
    }
    else {
        while (1) {
            if (b % a == 0)
                return a;
            else
                return GCM(a, b %= a);
        }
    }
}

int main() {
    int a, b;
    int LCM;
    scanf("%d %d", &a, &b);

    printf("%d\n",GCM(a, b));

    LCM = a * b / GCM(a, b);

    printf("%d\n", LCM);

    return 0;
}