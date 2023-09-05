#include <stdio.h>

int main(void){
    int number;
    int cnt = 1;

    scanf("%d", &number);

    while (1)
    {
        if (number == 1)
        {
            printf("%d", cnt);
            break;
        }

        if (number % 2 == 0)
        {
            number /= 2;
            cnt += 1;
        }
        else
        {
            number = number * 3 + 1; 
            cnt += 1;
        }
    }
    
    return 0;
}
