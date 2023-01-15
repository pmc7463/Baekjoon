#include <stdio.h>

int main() {
	int arr[8]  = {0}, arrTemp[8] = {0}, order[8] = {0};
    int temp, sum = 0;
    int length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
        arrTemp[i] = arr[i];
    }

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j+1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        for (int j = 0; j < length; j++) {
            if (arr[i] == arrTemp[j]) 
                order[j] = j + 1;
        }
    }
    printf("%d\n", sum);

    for (int i = 0; i < length; i++) {
        if (order[i] != 0)
            printf("%d ",order[i]);
    }

    return 0;
}