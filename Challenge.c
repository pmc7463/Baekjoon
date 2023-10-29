#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int cnt = 0;

    scanf("%d", &N);

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (pow(i,2) + N == pow(j,2)) {
                cnt++;
                break;           
            }
            else if (pow(i,2) + N == pow(j,2)) {
                break;
            }
        }
    } 
    printf("%d\n", cnt);

    return 0;
}
