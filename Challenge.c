#include <stdio.h>

int main(void)
{
    char str;
    int arr[27] = {0,};
    while (scanf("%c", &str) != EOF) {
        if (97 <= str && str <= 122)
            arr[str - 97]++;
        else
            break;
    }

    for (int i = 0; i < 26; i++) 
        printf("%d ", arr[i]);
    return 0;
}