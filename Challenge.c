#include <stdio.h>
#include <string.h>

#define SIZE 10000

int queue[SIZE]; // 1
int front = 0;
int rear = 0;

void pushq(int);
void popq();

int main(void) {
    char a[10]; // 2
    int total, num;
    scanf("%d", &total); // 3
    for (int i = 0; i < total; i++) {
        scanf("%s", a);
        if (!strcmp(a, "push")) {   // 4-1
            scanf("%d", &num); // 4-1-1
            pushq(num);        // 4-1-2
        }
        else if (!strcmp(a, "pop")) {   // 4-2
            popq(); // 4-2-1
        }
        else if (!strcmp(a, "size")) {  // 4-3
            printf("%d\n", rear - front); // 4-3-1
        }
        else if (!strcmp(a, "empty")) { // 4-4
            if (front == rear) {    // 4-4-1
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (!strcmp(a, "front")) { // 4-5
            if (front == rear) {    // 4-5-1
                printf("-1\n");
            }
            else {
                printf("%d\n", queue[front]);
            }
        }
        else if (!strcmp(a, "back")) {  // 4-6
            if (front == rear) {    // 4-6-1
                printf("-1\n");
            }
            else {
                printf("%d\n", queue[rear - 1]);
            }
        }
    }
}
void pushq(int num) {
    queue[rear] = num;
    rear++;
}
void popq() {
    if (front == rear) {
        printf("-1\n");
    }
    else {
        printf("%d\n", queue[front]);
        front++;
    }
}