#include <stdio.h>

int main() {
    int arr[81] = {0,};
    int a, b, c;
    int temp, flag;
    int max = 0;

    scanf("%d %d %d", &a, &b, &c);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                temp = i + j+ k;
                arr[temp] += 1;            
            }
        }
    }

    for (int p = 1; p <= 80; p++) {
        if (arr[p] > max) {
            max = arr[p];
            flag = p;
        }
    }
    
    printf("%d\n", flag);

    return 0;
}
