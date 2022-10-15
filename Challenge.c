#include <stdio.h>

int main(void) {
    int goblin, height1, height2, height3;

    scanf("%d", &goblin);

    for (int i = 0; i < goblin; i++) {
        scanf("%d %d %d", &height1, &height2, &height3);
        if (i == 0)
            printf("Gnomes:\n");
        
        if ((height1 < height2) && (height2 < height3))
            printf("Ordered\n");
        else if ((height3 < height2) && (height2 < height1))
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }

    return 0;
}