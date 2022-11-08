#include <stdio.h>

int main(void) {
    int num, snacks, child, parents;
    int sum = 0;
    scanf("%d %d %d", &snacks, &num, &child);

    parents = snacks * num - child;

    if (parents < 0) 
        parents = -parents;

    if (snacks * num < child)
        printf("0\n");
    else
        printf("%d\n", parents);

    return 0;
}