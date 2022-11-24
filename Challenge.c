#include <stdio.h>

int main() {
    int N, M, MAX = 0, sum = 0;
    int arr[100];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > MAX && sum <= M)
                    MAX = sum;
            }
        }
    }

    printf("%d\n", MAX);

    return 0;
}