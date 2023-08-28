#include <stdio.h>

int main(void)
{   
    int Test;
    int N;

    int fibonacci[41][2];

    fibonacci[0][0] = 1;
    fibonacci[0][1] = 0;

    
    fibonacci[1][0] = 0;
    fibonacci[1][1] = 1;

    for (int i = 2; i < 41; i++)
    {
        fibonacci[i][0] = fibonacci[i-1][0] + fibonacci[i-2][0];
        fibonacci[i][1] = fibonacci[i-1][1] + fibonacci[i-2][1];
    }

    scanf("%d", &Test);

    for (int j = 0; j < Test; j++)
    {
        scanf("%d", &N);
        printf("%d %d\n", fibonacci[N][0], fibonacci[N][1]);
    }

    return 0;
}