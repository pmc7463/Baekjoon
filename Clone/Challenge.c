#include <stdio.h>

#define minFinder(a , b) a < b ? a : b

int main() {
    char board[50][50];
    int N, M, i, j, width, height;
    int min = 80;
    int black = 0, white = 0;

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++)
        scanf("%s", &board[i]);
    
    for (i = 0; i < N - 7; i++) {
        for (j = 0; j < M - 7; j++) {
            black = 0;
            white = 0;
            for (width = i; width < i + 8; width++) {
                for (height = j; height < j + 8; height++) {
                    if ((width + height) % 2 == 0) {    // ¦�� �϶� 
                        if (board[width][height] == 'B')
                            white++;    // ¦��ĭ�� �������̸� ��� ī����
                        else
                            black++;    // ¦��ĭ�� ����̸� ������ ī���� 
                    }
                    else {  // Ȧ�� �϶�
                        if (board[width][height] == 'B')    
                            black++;    // Ȧ��ĭ�� �������̸� ������ ī����
                        else
                            white++;    // Ȧ��ĭ�� ����̸� ��� ī����
                    }
                }
            }
            min = minFinder(min, black);
            min = minFinder(min, white);
        }
    }
    printf("%d\n", min);

    return 0;
}