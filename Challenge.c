#include <stdio.h>

int main() {
    int month, day;

    scanf ("%d", &month);
    scanf ("%d", &day);

    if (month == 2) {
        if (day == 18)
            printf("Special\n");
        else if (day > 18)
            printf("After\n");
        else
            printf("Before\n");
    }

    else if (month > 2)
        printf("After\n");
    else
        printf("Before\n");

    return 0;
}