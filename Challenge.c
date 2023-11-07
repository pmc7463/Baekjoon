#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int arr[5];
    int sum = 0;
    int num;

    scanf("%d", &num);

    for (int j = 4; j >= 0; j--) {
        arr[j] = num % 10;
        num /= 10;
    }


    for (int i = 0; i < 5; i++) {
        sum += pow(arr[i], 5);
    }

    printf("%d\n", sum);

    return 0;
}