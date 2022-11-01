#include <stdio.h>

int main(void)
{
    int man, area;
    int arr[5] = {0,};
    int temp[5] = {0,};

    scanf("%d %d", &man, &area);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    man *= area;

    for (int i = 0; i < 5; i++) {
        temp[i] = arr[i] - man;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}