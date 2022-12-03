#include <stdio.h>

int main(void)
{
    int n, i, j, k;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        for ( j = 0 ; j < i; j++ ) {
            printf("*");
        }
        for ( k = 2 * n - 2 * i; k > 0; k-- ) {
            printf(" ");
        }
        for ( j = 0; j < i; j++ ) {
            printf("*");
        }
        printf("\n");
    }

    for ( i = n-1; i > 0; i-- ) {
        for ( j = i ; j > 0; j-- ) {
            printf("*");
        }
        for ( k = 0; k < 2 * n - 2 * i; k++ ) {
            printf(" ");
        }
        for ( j = i; j > 0; j-- ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}