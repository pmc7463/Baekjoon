#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define MAX_SIZE 500001

int N, M;
int have[MAX_SIZE];
int want[MAX_SIZE];

int Lower_bound(int* have, int key, int size) {
    int mid;
    int start = 0, end = size - 1;

    while (start < end) {
        mid = (start + end) / 2;
        if (key <= have[mid])
            end = mid;
        else
            start = mid + 1;
    }
    return end;
}

int Upper_bound(int* have, int key, int size) {
    int mid;
    int start = 0, end = size - 1;

    while (start < end) {
        mid = (start + end) / 2;
        if (key < have[mid])
            end = mid;
        else
            start = mid + 1;
    }
    if (have[end] == key) {
        return end + 1;
    }
    return end;
}

int cmp(const void* lhs, const void* rhs) {
    if (*(int*)lhs > *(int*)rhs) {
        return 1;
    }
    else {
        return -1;
    }
}

void Solve() {
    int lower;
    int upper;

    for (int i = 0; i < M; i++) {
        lower = Lower_bound(have, want[i], N);
        upper = Upper_bound(have, want[i], N);
        printf("%d ", upper - lower);
    }
}

void Input_Have() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &have[i]);
    }
}

void Input_Want() {
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &want[i]);
    }
}

int main() {
    Input_Have();
    Input_Want();

    qsort(have, N, sizeof(int), cmp);

    Solve();
    
    return 0;
}