#include <stdio.h>
#include <string.h>

int counter;

int cnt() {
    counter += 1;
    return counter;
}

int recursion(const char* s, int l, int r) {
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else {
        cnt();
        return recursion(s, l + 1, r - 1); 
    }
}

int isPalindrome(const char *s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int n, i;
    char arr[1001] = {0,};
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", &arr);
        printf("%d ", isPalindrome(arr));
        printf("%d\n", cnt());
        counter = 0;
    }

    return 0;
}