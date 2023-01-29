#include <stdio.h>

int main() {
    int min, max, flag = 0, sum = 0;
    int mul[10000];
    int minSearch = 10000;

    scanf("%d %d", &min, &max);

    for (int i = 0; i <= max; i++) {
        mul[i] = i * i;

        if (min <= mul[i] && mul[i] <= max) {
            sum += mul[i];

            if (minSearch > mul[i])
                minSearch = mul[i];
        }
    }
    if (sum == 0)
        printf("-1\n");
    else {
        printf("%d\n", sum);
        printf("%d\n", minSearch);
    }

    return 0;
}