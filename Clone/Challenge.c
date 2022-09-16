#include <stdio.h>
#include <stdlib.h> // qsort 함수가 선언된 헤더 파일

//int num[1000000];

int compare(const void *a, const void *b) { // 오름차순 비교 구현
    int num1 = *(int *)a;   // void 포인터를 int 포인터로 변환한 뒤 역참조 하여 값을 가져옴
    int num2 = *(int *)b;

    if (num1 < num2)    
        return -1;
    if (num1 > num2)
        return 1;
    return 0;       // a와 b가 같을 때는 0 반환
}

int main(void) {
    int n, i;
    int *num;   //배열 크기 구하기

    scanf("%d", &n);

    num = (int *)malloc(sizeof(int)*n); // 배열 크기 구하기

    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    
    qsort(num, n, sizeof(int), compare);
    // 정렬할 배열, 요소 개수, 요소크기, 비교 함수를 넣어줌
    for (i = 0; i < n; i++)
        printf("%d\n", num[i]);

    return 0;
}