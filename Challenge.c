#include <stdio.h>

int main(void)
{
    int R1, R2, average;

    scanf("%d %d", &R1, &average);

    R2 = average * 2 - R1;

    printf("%d\n", R2);
    
    return 0;
}