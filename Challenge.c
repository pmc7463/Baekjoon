#include <stdio.h>
#define MAX_SIZE 3
int sorted[MAX_SIZE]; // 추가적인 공간이 필요

    // i: 정렬된 왼쪽 리스트에 대한 인덱스
    // j: 정렬된 오른쪽 리스트에 대한 인덱스
    // k: 정렬될 리스트에 대한 인덱스
    /* 2개의 인접한 배열 list[left...mid]와 list[mid+1...right]의 합병 과정 */
    /* (실제로 숫자들이 정렬되는 과정) */

void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while (i <= mid && j <= right)
    {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // 남아 있는 값들을 일괄 복사
    if (i > mid)
    {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // 남아 있는 값들을 일괄 복사
    else
    {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for (l = left; l <= right; l++)
    {
        list[l] = sorted[l];
    }
}

// 합병 정렬
void merge_sort(int list[], int left, int right) {
    int mid;

    if (left < right) {
        mid = (left + right) / 2;           // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
        merge_sort(list, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
        merge_sort(list, mid + 1, right);  // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
        merge(list, left, mid, right);     // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
    }
}

int main(void) {
    int num[5], sum = 0, temp = 0, average;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    average = sum / 5;

    printf("%d\n", average);

    merge_sort(num, 0, 4);

    printf("%d\n", num[2]);
    return 0;
}