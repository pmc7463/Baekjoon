#include <stdio.h>

int main() {
    int a, b, c, sum = 0;

    for( ; ; ) { // 초깃값, 조건식, 변환식을 모두 생략하면 무한 루프
        scanf("%d %d %d", &a, &b, &c);

        if( a && b && c > 0 && a && b && c < 7) {
            break;        
        }
    }

    if (a == b && a == c && b == c){
        sum = a * 1000;
        sum = sum + 10000;
    }

    else if (a == b || a == c || b == c) {
        if(a == b){
            sum = a * 100;
            sum = sum +1000;
        }
        else if(a == c){
            sum = a * 100;
            sum = sum +1000;
        }
        else {
            sum = b * 100;
            sum = sum +1000;
        }
    }
    
    else {
        if(a > b){
            if (a > c)
                sum = a * 100;
            else
                sum = c * 100;    
        }
        else {  // a < b
            if (b > c)
                sum = b * 100;
            else
                sum = c * 100;
        }
    }

    printf("%d", sum);

    return 0;
}