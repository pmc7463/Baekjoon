#include <stdio.h>
#define TEST 1000001

int arr[TEST];  // 전역 변수로 배열을 선언하면 0으로 초기화 된다. 그리고 스택이 아닌 힙에 저장되기 때문에 크기에대해서 자유롭다

int main(void)
{
    int min, max;
    int i, j;
    
    arr[0] = 1; // arr[i] = 1 이라는 것은 소수가 아니다라는 뜻
    arr[1] = 1;

    for (j = 2; j < TEST / j; j++) {
        if (arr[j] == 1) 
            continue;   // 불필요한 반복 생략
        for (i = j * j; i < TEST; i += j)
            if (i % j == 0) 
                arr[i] = 1;
    }

    scanf("%d %d", &min, &max);
    
    for (i = min; i <= max; i++)
        if (arr[i] == 0)
            printf("%d\n", i);
    
    return 0;
}