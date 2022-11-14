#include <stdio.h>

int main(void) {
    int apple[2], orange[2];

    scanf("%d %d", &apple[0], &orange[0]);
    scanf("%d %d", &apple[1], &orange[1]);

    if (apple[0] + orange[1] >= apple[1] + orange[0])
        printf("%d\n", apple[1] + orange[0]);
    else
        printf("%d\n", apple[0] + orange[1]);

    return 0;
}