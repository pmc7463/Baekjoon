#include <stdio.h>

int main(void) {
    int T, N, i, j;
    int arr[10001] = {0,};

    for (i = 2; i < 10001 / i; i++) {
        if (!arr[i]) {
            for (j = i * i; j < 10001; j += i)
                if (j % i == 0)
                    arr[j] = 1;            
        }
    }

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (i = N / 2; i > 1; i--) {
            if (arr[i] == 1)
                continue;
            for (j = N / 2; j <= N; j++) {
                if (arr[j] == 1)
                    continue;
                if (i + j == N) 
                    goto OUT;
            }
        }
        OUT: printf("%d %d\n", i , j); 
    }
    return 0;
}