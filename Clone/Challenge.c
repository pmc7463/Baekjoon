#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* first, const void* second) {
    int* a = (int*)first;
    int* b = (int*)second;

    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else
        return 0;
}

int arith(int list[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (list[i]);
    }
    return round(sum / n);
}

int median(int list[], int n) {
    if (n == 1)
        return list[0];
    else  
        return list[(n + 1) / 2 - 1];
}

int Mode(int list[], int n) {
    int arr[8001] = {0,};
    int i, idx, max = 0, count = 0;

    for (i = 0; i < n; i++) {
        idx = list[i] + 4000;
        arr[idx] += 1;

        if (arr[idx] > max)
            max = arr[idx];
    }

    for (i = 0, idx = 0; i < 8001; i++) {
        if (arr[i] == 0)
            continue;
        if (arr[i] == max) {
            if (count == 0) {
                idx = i;
                count += 1;
            }
            else if (count == 1) {
                idx = i;
                break;
            }
        }
    }
    return idx - 4000;
}

int range(int list[], int n) {
    int max = list[n - 1];
    int min = list[0];
    
    return max - min;
}

int main() {
    int i, n;
    int* list;

    scanf("%d", &n);

    list = (int*)calloc(n, sizeof(int));

    for (i = 0; i < n; i++) {
        scanf(" %d", &list[i]);
    }

    qsort(list, n, sizeof(list[0]), compare);

    printf("%d\n", arith(list, n));
    printf("%d\n", median(list, n));
    printf("%d\n", Mode(list, n));
    printf("%d\n", range(list, n));

    free(list);

    return 0;
}