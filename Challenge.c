#include <stdio.h>

int main() {
    int yut = 0, sum = 0;
    
    for (int j = 0; j < 3; j++) {
        sum = 0;
        for (int i = 0; i < 4; i++) {
            scanf("%d ", &yut);
            if (yut == 0) {
                sum++;
            }
        }
        if (sum == 1) {
            printf("A\n");
        }
        else if (sum == 2) {
            printf("B\n");
        }
        else if (sum == 3) {
            printf("C\n");
        }
        else if (sum == 4) {
            printf("D\n");
        }
        else if (sum == 0) {
            printf("E\n");
        }
    }
    return 0;
}