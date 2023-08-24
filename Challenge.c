#include <stdio.h>

double func(double a, double b) 
{
    return (a + b) * (a - b);
}

int main(void)
{   
    double A;
    double B;

    scanf("%lf %lf", &A, &B);

    printf("%0.lf\n", func(A, B));

    return 0;
}