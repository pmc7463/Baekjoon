#include <stdio.h>

int main(void)
{
    int month, day, date = 0;

    scanf("%d %d", &month, &day);

    if (month != 1) {
        for (int i = 1; i < month; i++) {
            if (i == 2)
                date += 28;
            else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                date += 31;
            else 
                date += 30;
        }
    }

    if (month == 1) {
        for (int i = 1; i <= day; i++)
            date += 1;
    }
    else {
        for (int i = 1; i <= day; i++)
            date += 1;
    }

    switch(date % 7) {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        default:
            printf("SAT");
            break;
    }
    return 0;
}
