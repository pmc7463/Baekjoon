#include <stdio.h>

int main(void)
{
    int num, a = 0, b = 1, c;
    scanf("%d", &num);

    if (num < 2) {
        if (num == 0)
            printf("0\n");
        else
            printf("1\n");
    }
    else {
        for (int i = 0; i < num - 1; i++) {
            c = b + a;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
    return 0;
}
