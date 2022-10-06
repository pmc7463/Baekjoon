#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i > 0; i--) {
        for (int k = N - i; k > 0; k--) {
            printf(" ");
        }

        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
