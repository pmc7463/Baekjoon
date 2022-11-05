#include <stdio.h>

int main(void)
{
    int day, counter = 0;
    int car[5] = {0};

    scanf("%d", &day);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &car[i]);
    }

    for (int i = 0; i < 5; i++) {
        if(car[i] == day)
            counter++;
    }

    printf("%d\n", counter);

    return 0;
}