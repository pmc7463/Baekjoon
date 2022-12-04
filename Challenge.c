#include <stdio.h>

int main(void)
{
    int school[3];
    int s, k, h, sum;
    
    scanf("%d %d %d", &s, &k, &h);

    sum = s + k + h;

    if (sum >= 100)
        printf("OK\n");
    else {
        if (s < k && s < h)
            printf("Soongsil\n");
        else if (k < s && k < h)
            printf("Korea\n");
        else
            printf("Hanyang\n");
    }

    return 0;
}