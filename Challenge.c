#include <stdio.h>

int main(void)
{
    int M, F;

    while (1) {
        scanf("%d %d", &M, &F);
        
        if ((M != 0) && (F != 0)) 
            printf("%d\n", M + F);
        else
            break;
    }
    return 0;
}