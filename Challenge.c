#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;
    int size = 1000000;
    int num;
    int i = 0;
    int left = 0, mid, right = 0;

    arr = (int*)malloc(size * sizeof(int));

    scanf("%d", &num);

    while (num > 0) {
        arr[i] = num % 10;
        num /= 10;
        i++;
    }

    mid = (i + 1) / 2;

    for (int j = 0; j < mid; j++) {
        left += arr[j];
    }

    //printf("\n");

    for (int k = mid; k < mid*2; k++) {
        right += arr[k];
    }

    if (left == right) {
        printf("LUCKY");
    }
    else {
        printf("READY");
    }

    free(arr);
    
    return 0;
}
