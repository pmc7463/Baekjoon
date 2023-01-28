#include <stdio.h>

int main() {
    int layer;

    scanf("%d", &layer);

    for (int i = 0; i < layer; i++) {
        for (int j = 0; j < layer - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}