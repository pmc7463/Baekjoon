#include <stdio.h>

int main(void){
    int i, j, k, input;

    scanf("%d", &input);

    for (i = input; i > 0; i--) {
        for (j = 1; j <= input - i; j++)
            printf(" ");
        for (k = (i*2)-1; k > 0; k--)
            printf("*");
        printf("\n");
    }


    for (i = 2; i <= input; i++) {
        for (j = input; j - i> 0; j--)
            printf(" ");
        for (k = 1; k <= (i*2)-1; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}