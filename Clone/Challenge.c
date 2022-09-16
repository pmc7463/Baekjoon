#include <stdio.h>
#define MAX 10001

int main(void) {
    int N, i, j, num;
    int counting[MAX];

    scanf("%d", &N);

    for (i = 0; i < MAX; i++) {
        counting[i] = 0;
    }
    
    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        counting[num]++;
    }

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < counting[i]; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}