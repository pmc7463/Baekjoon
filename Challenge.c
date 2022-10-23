#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    for (int i = input; i > 0; i--)
    {
        for (int j = input - i; j > 0 ; j--)
            printf(" ");
        for (int k = 2 * i - 1; k > 0; k--)
            printf("*");
        printf("\n");
    }

    return 0;
}