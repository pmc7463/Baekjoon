#include <stdio.h>

int main() {
    int row, col;
    char str[15];

    scanf("%d %d", &row, &col);

    for ( int i = 0; i < row; i++ ) {
        scanf("%s", str);
        for (int j = col-1; j >= 0; j-- ) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}