#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct StackRecord* Stack;
struct StackRecord {
    int Capacity;
    int Top;
    int* array;
};

Stack CreateStack(int maxElement) {
    Stack S = (Stack)malloc(sizeof(struct StackRecord));
    if (S == NULL) {
        exit(1);
    }
    
    S->array = (int*)malloc(sizeof(int) * maxElement);
    if (S->array == NULL) {
        exit(1);
    }
    S->Capacity = maxElement;
    S->Top = -1;
    return S;
}

int IsEmpty(Stack S) {
    return S->Top == -1;
}

int IsFull(Stack S) {
    return S->Top == S->Capacity - 1;
}

void push(int x, Stack S) {
    if (IsFull(S))
        return;
    S->array[++S->Top] = x;
}

int pop(Stack S) {
    if (IsEmpty(S))
        printf("-1\n");
    else {
        printf("%d\n", S->array[S->Top]);
        S->Top--;
    }
}

int Top(Stack S) {
    if (IsEmpty(S)) {
        return -1;
    }
    return S->array[S->Top];
}
int main() {
    int T;
    int element;
    int op;
    
    scanf("%d", &T);

    Stack stack = CreateStack(T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &op);

        if (op == 1) {
            scanf("%d", &element);
            push(element, stack);
        }
        if (op == 2) {
            pop(stack);
        }
        if (op == 3)
            printf("%d\n", stack->Top+1);
        if (op == 4) {
            if (IsEmpty(stack))
                printf("1\n");
            else
                printf("0\n");
        }
        if (op == 5) {
            if (!IsEmpty(stack)) {
                printf("%d\n", Top(stack));
            }
            else {
                printf("-1\n");
            }
        }
    }
    free(stack->array);
    free(stack);
    return 0;
}