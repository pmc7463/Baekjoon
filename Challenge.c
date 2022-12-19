#include <stdio.h>
int main()
{
    int s[5];
    int result = 0;
    for (int a = 0; a < 5; a++)
    {
        scanf("%d", &s[a]);
    }
    for (int a=1;; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            if (a%s[b] == 0)
                result++;
        }
        if (result >= 3)
        {
            printf("%d\n", a);
            break;
        }
        else
            result = 0;
    }
    return 0;
}
 
