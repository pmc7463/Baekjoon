#include <stdio.h>

int main() {
	int row, col, tempRow, tempCol;
    char guard[50][50] = {0};

    scanf("%d %d", &row, &col);
    getchar();

    tempRow = row;
    tempCol = col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) 
            guard[i][j] = getchar();
        getchar();
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (guard[i][j] == 'X') {
                tempRow--;
                break;
            }   
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (guard[j][i] == 'X') {
                tempCol--;
                break;
            }
        }
    }

    if (tempRow > tempCol)
        printf("%d\n", tempRow);
    else
        printf("%d\n", tempCol);

    return 0;
}