#include <stdio.h>

int main() {
    int temp = 0, max = 0, input[4], output[4];

    for(int i = 0; i < 4; i++) {
        scanf("%d %d", &output[i], &input[i]);
    }

    for (int i = 0; i < 4; i++) {
        temp = temp + input[i] - output[i];
        if (temp > max) {
            max = temp;
        }
    }
    printf("%d\n", max);
    return 0;
}