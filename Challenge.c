#include <stdio.h>

int Tri(int star) {
    return (star * (star+1)) / 2;
}
 
int main() {
    int T, num;
    int sum = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        sum = 0;
        scanf("%d", &num);

        for (int j = 1; j <= num; j++) {
            sum += j * Tri(j+1);
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
