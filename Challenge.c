#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int cnt = 0;

    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}