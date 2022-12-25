#include <stdio.h>

int main() {
    int money, counter = 0, change;

    scanf("%d", &money);

    change = 1000 - money;
    
    while (change != 0)
    {
        if (change >= 500)
        {
            change -= 500;
            counter++;
        }
        if (change >= 100 && change < 500)
        {
            change -= 100;
            counter++;
        }
        if (change >= 50 && change < 100)
        {
            change -= 50;
            counter++;
        }
        if (change >= 10 && change < 50)
        {
            change -= 10;
            counter++;
        }
        if (change >= 5 && change < 10)
        {
            change -= 5;
            counter++;
        }
        if (change >= 1 && change < 5)
        {
            change -= 1;
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}
