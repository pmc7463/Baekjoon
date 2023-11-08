#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, temp;
    int beg, mid, end;
    int *arr;

    scanf("%d %d", &n, &m);
    arr = malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
        arr[i] = i + 1;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d %d", &beg, &end, &mid);
        for (; beg - 1 < mid - 1; mid--, end--)
        {
            temp = arr[mid - 2];
            for (j = mid - 1; j <= end - 1; j++)
                arr[j - 1] = arr[j];
            arr[end - 1] = temp;
        }
    }
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    free(arr);
}