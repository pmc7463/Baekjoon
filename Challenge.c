#include <stdio.h>

int main(void)
{
    int N, M;

    scanf("%d %d", &N, &M);

    int halmet[1000];
    int vest[1000];

    int H_max = 0;
    int V_max = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &halmet[i]);
        //getchar();
    }

    for (int j = 0; j < M; j++)
    {
        scanf("%d", &vest[j]);
        //getchar();
    }

    for (int H = 0; H < N; H++)
    {
        if (halmet[H] > H_max)
            H_max = halmet[H];
    }

    for (int V = 0; V < M; V++)
    {
        if (vest[V] > V_max)
            V_max = vest[V];
    }

    printf("%d", H_max + V_max);

    return 0;
}