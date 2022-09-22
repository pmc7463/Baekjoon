#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coord;    // coord형의 구조체 서언

int compare(const void *a, const void *b) {
    coord A = *(coord *)a;
    coord B = *(coord *)b;

    if (A.y > B.y)  // 구조체의 y를 끌고와서 사용한다. 오름차순 정렬 
        return 1;
    else if (A.y == B.y) {
        if (A.x > B.x) 
            return 1;
        else
            return -1;
    }
    return -1;
}

int main() {
    int n, i = 0;
    
    scanf("%d", &n);

    coord arr[n];

    while (i < n) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        // 구조체배열로 arr[0]의 x값 , y값 각각 설정하면서 간다.
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