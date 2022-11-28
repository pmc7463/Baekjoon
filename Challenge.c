#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[9], height[7];
    int sum = 0, over = 0;
    int x = 0, y = 0, temp, i, j;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    over = sum - 100;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if ((arr[i] + arr[j]) == over) {
                x = i;
                y = j;
                break;
            }
        }
    }

    j = 0;
    for (int i = 0; i < 9; i++) {
        if (i != x && i != y) {
            height[j] = arr[i];
            j++;
        }
    }
    
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (height[i] > height[j]) {
                temp = height[i];
                height[i] = height[j];
                height[j] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\n", height[i]);
    }
    return 0;
}