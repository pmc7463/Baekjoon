#include <stdio.h>
#include <stdlib.h>

int main() {
	int testCase, money, cnt = 0;
    int* coin;

    scanf("%d %d", &testCase, &money);

    coin = (int*)malloc(sizeof(int) * testCase);

    for (int i = 0; i < testCase; i++) {
        scanf("%d", &coin[i]);
    }

    while (money != 0) {
        cnt = cnt + (money / coin[testCase - 1]);
        money = money % coin[testCase - 1];
        testCase--;
    }
    
    printf("%d\n", cnt);

    free(coin);

    return 0;
}