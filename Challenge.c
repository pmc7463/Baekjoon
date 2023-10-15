#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int seletionSort(int arr[], int size) {
    int min, temp;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //printf("정렬 : ");
    /*
    for (int k = 0; k < 5; k++) {
        printf("%d ", arr[k]);
    }
    */
    //printf("\n");

    //printf("arr[0] : %d, arr[4] : %d\n", arr[0], arr[4]);

    if (arr[3] - arr[1] >= 4)
        printf("KIN\n");
    else
        printf("%d\n", arr[1] + arr[2] + arr[3]);

    return 0;
}

int main(void) {
    int test;
    int arr[5];
    
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

        /*
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        */
        seletionSort(arr, 5);
    }

    return 0;
}