#include <stdio.h>

int main() {
    
    int arr[4] = {0,};
    int sum;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 40)
            arr[i] = 40;
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    sum /= 5;

    printf("%d", sum);
    
    return 0;
}
