#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, count;
    int left, right;
    char arr[51];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        count = 1;
        left = 0;
        right = 0;

        scanf("%s", arr);

        for (j = 0; j < strlen(arr); j++) {
            if (arr[j] == '(')
                left++;
            if (arr[j] == ')')
                right++;
            if (right > left) {
                count = 0;
                break;
            }
        }
        if (count == 1 && left == right)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

