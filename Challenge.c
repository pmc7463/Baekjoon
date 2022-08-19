#include <stdio.h>

int main () {
    int H, M, clock = 0;
    int x, y, z= 0;

    scanf("%d %d", &H, &M);
    scanf("%d", &clock);

    if((0 <= H && H <= 23) && (0 <= M && M <= 59) && (0 <= clock && clock <= 1000)){    
        if(clock + M < 60)  // 60분 넘으면 H 고려하기 위해서 조건문 사용
            printf("%d %d", H, M + clock);
        else {
            x = (M + clock) / 60;   // 1시간 이상
            y = clock % 60;         // 남은 분 량 

            if (M + y >= 60) {
                if(H + x < 23)  // 현재 시간 + 설정 시간 = 23시 미만 
                    printf("%d %d", H + x, M + y - 60);
                else if (H + x == 23)   // 현재 시간 + 설정 시간 == 23시 일 때
                    printf("%d %d",H + x, M + y - 60);
                else {          // 현재 시간 + 설정 시간 = 23시 이상
                    if(M + clock >= 60) // 현재 시간 + 설정 시간 = 23시 이상 + 60분 이상 값
                        printf("%d %d",H + x - 24, M + y - 60);
                }
            }
            else {
                if(H + x < 23)  // 현재 시간 + 설정 시간 = 23시 미만 
                    printf("%d %d", H + x, M + y);
                else if (H + x == 23)   // 현재 시간 + 설정 시간 == 23시 일 때
                    printf("%d %d",H + x, M + y);
                else {          // 현재 시간 + 설정 시간 = 23시 이상
                    if(M + clock >= 60) // 현재 시간 + 설정 시간 = 23시 이상 + 60분 이상 값
                        printf("%d %d",H + x - 24, M + y);
                 }
            }   
        }
    }
    else return 0;   // 입력 에러

   return 0;
}