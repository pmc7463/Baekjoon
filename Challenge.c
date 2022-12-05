#include <stdio.h>

int main(void)
{
    int clothes;

    scanf("%d", &clothes);

    if (1 <= clothes && clothes <= 2017)
        printf("%d\n", clothes * (clothes - 1));

    return 0;
}