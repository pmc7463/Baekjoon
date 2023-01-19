#include <stdio.h>
#include <stdlib.h>
int arrN[100000];
int arrM[100000];
int check[100000];

// ����Ž��Ʈ��
int binary_search_tree(int arr[], int key, int size)
{
    int front, rear, pivot;
    front = 0;
    rear = size - 1;

    while (1)
    {
        pivot = (front + rear) / 2;
        if (arr[pivot] == key)
            return 1;
        if (arr[front] == key)
            return 1;
        if (arr[rear] == key)
            return 1;

        if (arr[pivot] < key)
            front = pivot + 1;
        else
            rear = pivot - 1;

        if (front >= rear)
            return 0;
    }
}

// �� ��Ʈ���� ����� ���Լ�
int cmp(const void *a, const void *b)
{
    return *(int *)a > *(int *)b ? 1 : (*(int *)a < *(int *)b ? -1 : 0);
}

int main()
{
    int N, M;
    int i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arrN[i]);
    }

    scanf("%d", &M);
    for (i = 0; i < M; i++)
    {
        scanf("%d", &arrM[i]);
    }

    // �� ����
    qsort(arrN, N, sizeof(int), cmp);

    for (i = 0; i < M; i++)
    {
        printf("%d\n", binary_search_tree(arrN, arrM[i], N));
    }

    return 0;
}