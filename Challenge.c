#include <stdio.h>

int find_ds(int n) {
    int ds = n;
    for (int i = 0; n != 0; i++) {
        ds += n % 10;
        n /= 10;
    }
    return ds;
}

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (find_ds(i) == num) {
            printf("%d\n", i);
            break;
        }
        if (i == num)
            printf("0\n");
    }
    return 0;
}