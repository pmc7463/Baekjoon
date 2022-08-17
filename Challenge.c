#include <stdio.h>

int main () {
    int a[3] = {0, };
    int b[3] = {0, };;
    int i = 0;
    int add[3] = {0, };

    for(i = 0; i < 3; i++) {
        scanf("%1d", &a[i]);
    }

    for(i = 0; i < 3; i++) {
        scanf("%1d", &b[i]);
    }

    //scanf("%d %d %d", &b[0], &b[1], &b[2]);

    //printf("%d", a[0] * 100 + a[1] * 10 + a[2]);
    for (i = 2; i > -1; i--){
        add[i] = (a[0] * 100 * b[i]) + (a[1] * 10 * b[i]) + (a[2] * b[i]);
        printf("%d\n", add[i]);
    }
    
    printf("%d", add[0] * 100 + add[1] * 10 + add[2]);
   return 0;
}
