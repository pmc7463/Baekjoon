#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000

char result[SIZE * 2];
int stack[SIZE];
int top = -1;

int main() {
    int n, num = 1, i, idx = 0, result_idx = 0;
    scanf("%d", &n);
    
    int* arr = (int*)malloc(sizeof(int)*n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    while(1) {
        if (top == -1 || stack[top] < arr[idx]) {
            stack[++top] = num++;
            result[result_idx++] = '+';
        }

        else if (stack[top] == arr[idx]) {
            top--;
            result[result_idx++] = '-';
            idx++;
        }
        else {
            printf("NO");
            free(arr);
            return 0;
        }

        if (result_idx == n * 2)
            break;
    }
    for (i = 0; i < result_idx; i++)
        printf("%c\n", result[i]);

    free(arr);

    return 0;
}