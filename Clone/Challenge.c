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
                    if ((width + height) % 2 == 0) {    // Â¦¼ö ÀÏ¶§ 
                        if (board[width][height] == 'B')
                            white++;    // Â¦¼öÄ­ÀÌ °ËÀº»öÀÌ¸é Èò»ö Ä«¿îÅÍ
                        else
                            black++;    // Â¦¼öÄ­ÀÌ Èò»öÀÌ¸é °ËÀº»ö Ä«¿îÅÍ 
                    }
                    else {  // È¦¼ö ÀÏ¶§
                        if (board[width][height] == 'B')    
                            black++;    // È¦¼öÄ­ÀÌ °ËÀº»öÀÌ¸é °ËÀº»ö Ä«¿îÅÍ
                        else
                            white++;    // È¦¼öÄ­ÀÌ Èò»öÀÌ¸é Èò»ö Ä«¿îÅÍ
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