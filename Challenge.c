#include <stdio.h>

int main(void)
{
    int cow, width, height, length, answer;

    scanf("%d %d %d %d", &cow, &width, &height, &length);

    answer = (width / length) * (height / length);

    printf("%d\n", cow < answer ? cow : answer);
    
    return 0;
}
