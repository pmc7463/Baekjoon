#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y; 
} coord;

int compare(const void *a, const void *b) {
    coord A = *(coord *)a;  //coord형의 A로 입력받은 a를 사용할 수 있게 한다.
    coord B = *(coord *)b;
    if (A.x > B.x)  // 구조체의 x를 끌고와서 사용한다. 오름차순 정렬 
        return 1;
    else if (A.x == B.x) {   // x좌표가 같다면,
        if (A.y > B.y)  // y좌표를 비교한다. 오름차순 정렬
            return 1;
        else
            return -1;  
    }
    return -1;
}

int main () {
    int n, i = 0;
    scanf("%d", &n);

    coord arr[n];   // 구조체형으로 배열을 선언한다.
    while (i < n) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        // 구조체 배열로 arr[0]의 x값, y값 각각 설정 하면선 간다.
        i++;
    }

    qsort(arr, n, sizeof(coord), compare);
    i = 0;
    while (i < n) {
        printf("%d %d\n", arr[i].x, arr[i].y);
        i++;
    }
    return 0;
}