#include <stdio.h>

int main () {
    int H, M, clock = 0;
    
    scanf("%d %d", &H, &M);

    if((0 <= H && H <= 23) && (0 <= M && M <= 59)){    
        if(M >= 45){
            printf("%d %d", H, M - 45);
        }
        else {  // M < 45
            if(H - 1 < 0)
                printf("%d %d", H + 23, M + 15);
            else
                printf("%d %d", H - 1, M + 15);
        }
    }
    else return 0;   // 입력 에러

   return 0;
}
