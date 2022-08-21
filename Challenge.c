#include <stdio.h>

int main() {
    int money, amount = 0;
    int a, b, c = 0;
    int result = 0;

    scanf("%d", &money);
    scanf("%d", &amount);

    for(int i = 0; i < amount; i++){
        scanf("%d %d", &a, &b);
        result += a * b;
    }

    if(result == money)
        printf("Yes");
    else
        printf("No");

    return 0;
}
