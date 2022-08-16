#include <stdio.h>

int main () {
    int king, queen, rook, bishop, knight, pawn  = 0;
    
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    printf("%d %d %d %d %d %d", 1 - (king), 1 - (queen), 2 - (rook), 2 - (bishop), 2 - (knight), 8 - (pawn));
    
    return 0;
}