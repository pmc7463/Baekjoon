#include<stdio.h>

int main() {
	int i, testCase, round;

    scanf("%d", &testCase);

    for (int r = 0; r < testCase; r++) {
        scanf("%d", &round);

        for (i = 1; i*i <= round; i++);

        printf("%d\n", i-1);
        
    }
    return 0;
}