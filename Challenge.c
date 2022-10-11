#include <stdio.h>

int main() {
    int input;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        for (int k = input - i; k > 0; k--) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }

        for (int p = 1; p < i; p++) {   // j의 별이 끝나면 p의 별 시작, 첫번째는 실행 하면 안됨
            printf("*");
        }
        printf("\n");
    }

    return 0;
}