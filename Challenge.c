#include <stdio.h>
#include <stdlib.h>

void quicksort(int data[], int start, int end) {    // 매개변수로 배열, 시작, 끝 값 받음
    if (start >= end) { //원소가 1개인 경우를 의미
        return;
    }

    int key = start; // key는 첫번째 원소 (기준을 의미)
    int i = start + 1;  //기준이 되는 숫자 바로 오른쪽을 말함.
    int j = end;    //배열의 가장 끝을 말함.
    int temp;   //swap을 위한 변수

    while (i <= j) {    // 엇 갈리기 전까지 계속 반복
        while (data[i] <= data[key]) {  // 첫번째 케이스 : 기준값보다 큰 수를 찾아가는 경우
            i++;
        }

        while (data[j] > data[key] && j > start) {  // 두번째 케이스 : 기준값보다 작은 수를 찾아가는 경우
            j--;
        }

        if ( i > j) {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }

        else {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quicksort(data, start, j-1);
    quicksort(data, j+1, end);
}

int main() {
    int* arr;
    int* timeSum;

    int people, sum1 = 0, sum2 = 0;

    scanf("%d", &people);

    arr = malloc(sizeof(int) * people);
    timeSum = malloc(sizeof(int) * people);

    for (int i = 0; i < people; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, people-1);
    
    for (int i = 0; i < people; i++) {
        sum1 += arr[i];
        timeSum[i] = sum1;
    }

    for (int i = 0; i < people; i++) {
        sum2 += timeSum[i];
    }

    printf("%d\n", sum2);

    free(arr);
    free(timeSum);
    return 0;
}