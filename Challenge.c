#include <stdio.h>
#include <string.h>

int main() {
    char strNumber[100000] = "";
    int palindrome = 1;

    while (1) {
        scanf("%s", &strNumber);

        if (strNumber[0] != '0') {
            for (int i = 0; i < strlen(strNumber)/2; i++) {
                if (strNumber[i] != strNumber[strlen(strNumber) - 1 - i]) {
                    palindrome = 0;
                }
            }
            if (palindrome == 1)
                printf("yes\n");
            else {
                printf("no\n");
                palindrome = 1;
            }
        }
        else
            break;
    }
    return 0;
}