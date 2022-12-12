#include <stdio.h>

int main(void)
{
    int kill, assist, death;

    scanf("%d/%d/%d", &kill, &death, &assist);

    if (kill + assist < death || death == 0) {
        printf("hasu\n");
    }
    else
        printf("gosu\n");

    return 0;
}
