#include <stdio.h>

int main() {
    int star;
    int res = 5;
    int plus = 7;

    scanf("%d", &star);

    for (int i = 2; i <= star; i++) {
        res += plus;
        plus += 3;
        res %= 45678;
    }
    printf("%d",res);
    return 0;
}
