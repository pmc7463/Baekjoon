#include <stdio.h>

int main() {
    int a, b, c;

    do {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        c = a > b? printf("Yes\n") : printf("No\n");
    } while (a > 0 && b > 0);

    return 0;
}