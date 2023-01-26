#include <stdio.h>
#define size 500000

int main() {
    int card, front = 0, rear;
    int que[size];

    scanf("%d", &card);

    rear = card - 1;

    for (int i = 0; i < card; i++)
        que[i] = i + 1;
    
    rear = card - 1;

    while(1) {
        front = (front + 1) % card;

        if (rear == front)
            break;
        
        rear = (rear + 1) % card;

        que[rear] = que[front];

        front = (front + 1) % card;

        if (rear == front)
            break;
    }

    printf ("%d\n", que[rear]);
    
    return 0;
}