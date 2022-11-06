#include <stdio.h>

int cooking(int x) {
    return x / 60;
}

int main(void)
{
    int hour, minute, second, cook;
    int time1, time2;
    scanf("%d %d %d", &hour, &minute, &second);
    scanf("%d", &cook);

    second += cook % 60;

    time1 = cooking(cook);

    if (time1 >= 60) {
        hour += cooking(time1);
        minute += time1 % 60;
    }
    else 
        minute += time1;
    
    if (second >= 60) {
        minute += cooking(second);
        second %= 60;
    }

    if (minute >= 60) {
        hour += cooking(minute);
        minute %= 60;
    }

    if (hour >= 24) {
        hour %= 24;
    }

    printf("%d %d %d\n", hour, minute, second);

    return 0;
}