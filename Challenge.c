#include <stdio.h>

int main(void)
{   
    char input[9];
    int a, b, c;
    int d, e, f;
    int g, h ,i;

    int time = 0;

    scanf("%8s", input);
    sscanf(input, "%d:%d:%d", &a, &b, &c);

    scanf("%8s", input);
    sscanf(input, "%d:%d:%d", &d, &e, &f);

    time = d * 3600 + e * 60 + f - (a * 3600 + b * 60 + c);

    if (time < 0)
    {
        time += 3600 * 24;
    }

    g = (int)time / 3600;
    h = (int)(time % 3600) / 60;
    i = time % 60;

    printf("%02d:%02d:%02d", g, h, i);
    return 0;
}