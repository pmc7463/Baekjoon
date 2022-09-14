#include <stdio.h>
#include <stdlib.h>

void insertSort(int num,int *arr) {
    int i, j, key;

    for (i = 1; i < num; i++) {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] < key; j--) {
            arr[j + 1] = arr[j];    // 한 칸 뒤로 이동
        }
        arr[j + 1] = key;   //알맞은 위치에 key삽입
    }
}

int main() {
    int N, k, i;
    int *arr;

    scanf("%d %d", &N, &k);

    arr = (int *)malloc(sizeof(int)*N); // 그 길이에 맞춘 배열 생성
    for (i = 0; i < N; i++) {

        scanf("%d", &arr[i]);
    }
    
    insertSort(N, arr);

    printf("%d\n", arr[k - 1]);

    return 0;
}