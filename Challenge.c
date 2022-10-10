#include <stdio.h>

int main() {
    int one = 0, two, three;

    scanf("%d %d", &three, &two);

    one = two - three;

    one += two;

    printf("%d\n", one);

    return 0;
}