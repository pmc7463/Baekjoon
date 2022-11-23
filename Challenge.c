#include <stdio.h>

int main() {
    int N, arr[100], goal, temp = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &goal);

    for (int i = 1; i <= N; i++) {
        if (goal == arr[i])
            temp++;          
    }

    printf("%d\n", temp);

    return 0;
}