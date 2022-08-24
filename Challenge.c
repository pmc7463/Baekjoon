#include <stdio.h>
int main() {
    int arr[10], big = 0, index;
    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > big)
        {
            big = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", big, index);

    return 0;
}