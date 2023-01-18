#include <stdio.h>

int main() {
    int time, A300 = 300, B60 = 60, C10 = 10;

    scanf("%d", &time);

    if (time % 10 != 0) 
        printf("-1\n");
    else {
        A300 = time / 300;
        time %= 300;
        B60 = time / 60;
        time %= 60;
        C10 = time / 10;
        time %= 10;

        printf("%d %d %d\n", A300, B60, C10);
    }
    return 0;
}