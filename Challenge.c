#include <stdio.h>

int main() {
    int input = 0, sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &input);
        sum += input;
    }
    printf("%d\n", sum);

    return 0;
}