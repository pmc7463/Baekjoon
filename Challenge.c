#include <stdio.h>

int main() {
    int num, compare, again = 0;

    scanf("%d", &num);

    compare = num;

    do{
        compare = (compare % 10) * 10 + (compare / 10 + compare % 10) % 10;
        again++;
    } while(compare != num);
    
    printf("%d", again);
    
    return 0;
}