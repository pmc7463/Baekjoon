#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[101];
    int counter = 0;
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
        if ((i + 1)  % 10 == 0)
            printf("\n");
    }
    return 0;
}