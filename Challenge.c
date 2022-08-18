#include <stdio.h>

int main () {
    int year = 0;

    scanf("%d", &year);
    
    if(year % 4 == 0){              // 1단계
        if(year % 100 == 0) {       // 2단계
            if(year % 400 == 0){    // 3단계
                printf("1");        // 최종 윤년
            }
            else
                printf("0");        // 3단계 윤년 아님
        }
        else
            printf("1");            // 2단계 윤년
    }
    else 
        printf("0");                // 1단계 윤년 아님
        
   return 0;
}
