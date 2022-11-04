#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}