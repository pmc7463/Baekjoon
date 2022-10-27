#include <stdio.h>

int main(void)
{
    int time[5] = {0,};
    int sum = 0;
    int clock;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &time[i]);
        sum += time[i];
    }
    
    clock = sum / 60;
    sum %= 60;

    printf("%d\n%d\n", clock, sum);
    return 0;
}