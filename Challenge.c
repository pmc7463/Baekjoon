#include <stdio.h>

int main(void)
{
    int input;
    int brain, zombie;

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        scanf("%d %d", &brain, &zombie);
        if(brain >= zombie)
            printf("MMM BRAINS\n");
        else
            printf("NO BRAINS\n");
    }

    return 0;
}