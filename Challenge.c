#include <stdio.h>
#include <stdlib.h>

void quicksort(int data[], int start, int end) {    // �Ű������� �迭, ����, �� �� ����
    if (start >= end) { //���Ұ� 1���� ��츦 �ǹ�
        return;
    }

    int key = start; // key�� ù��° ���� (������ �ǹ�)
    int i = start + 1;  //������ �Ǵ� ���� �ٷ� �������� ����.
    int j = end;    //�迭�� ���� ���� ����.
    int temp;   //swap�� ���� ����

    while (i <= j) {    // �� ������ ������ ��� �ݺ�
        while (data[i] <= data[key]) {  // ù��° ���̽� : ���ذ����� ū ���� ã�ư��� ���
            i++;
        }

        while (data[j] > data[key] && j > start) {  // �ι�° ���̽� : ���ذ����� ���� ���� ã�ư��� ���
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