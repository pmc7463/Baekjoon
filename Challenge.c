#include <stdio.h>

int main() {
    int input, min = 0;
    int cow[100][2], check[100], counter[100];

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        scanf("%d %d", &cow[i][0], &cow[i][1]);
    }

    for (int i = 0; i < input; i++) {
        counter[i] = 0;
        check[i] = -1;
    }

    for (int i = 0; i < input; i++) {
        for (int j = i + 1; j < input; j++) {
            if ((cow[i][0] == cow[j][0]) && (cow[i][1] != cow[j][1]) && (cow[j][1] != check[cow[i][0]])) {
                counter[cow[i][0]]++;
                check[cow[i][0]] = cow[j][1];
                break;
            }
        }
    }

    for (int i = 0; i < input - 1; i++) {
        min += counter[i];
    }

    printf("%d", min);
}