#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[501];

    while (1) {
        gets(str);
        if (str[0] == 'E' && str[1] == 'N' && str[2] == 'D')
            break;
        
        for (int i = strlen(str) - 1; i >= 0; i--)
            printf("%c", str[i]);
        printf("\n");
    }
    
    return 0;
}