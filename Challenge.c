#include <stdio.h>
#include <stdlib.h>

int main() {
    int human, kill, counter = 0, index, add;
    int* arr;

    scanf("%d %d", &human, &kill);

    arr = (int*)calloc(human, sizeof(int));

    for (int i = 0; i < human; i++) {
        arr[i] = i + 1;
    }

    printf("<%d", arr[kill - 1]);
    arr[kill - 1] = -1;

    for (int i = 0, index = kill; i < human -1; i++) {
        counter = 0;
        add = -1;
        while (counter < kill) {
            add += 1;
            if (arr[(index + add) % human] != -1)
                counter += 1;
        }
        index = (index + add) % human;
        printf(", %d", arr[index]);
        arr[index] = -1;
        
    }
    printf(">\n");

    free(arr);

    return 0;
}