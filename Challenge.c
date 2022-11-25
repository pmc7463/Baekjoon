#include <stdio.h>

int main() {
    int student[28], absent[30], arr[2], k = 0;

    for (int i = 1; i <= 30; i++) {
        absent[i] = i;
    }

    for (int i = 0; i < 28; i++) {
        scanf("%d", &student[i]);
    }

    for (int j = 1; j <= 30; j++) {
        for (int i = 0; i < 28; i++) {
            if (j == student[i])
                absent[j] = 0;
        }
    }

    for (int i = 1; i <= 30; i++) {
        if (absent[i] != 0) {
            arr[k] = i;
            k++;
        }
    }

    printf("%d\n%d", arr[0], arr[1]);
    return 0;
}