#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10001

typedef struct node {
    struct node* next;
    struct node* prev;
    int key;
}node;

void getNode(node**p) {
    (*p) = (node*)malloc(sizeof(node));
    (*p) -> next = NULL;
    (*p) -> prev = NULL;
}

void push_front(node*H, int e) {    // addLast
    node* p = NULL;
    getNode(&p);
    p -> key = e;

    node* q = H;
    while (q -> next != NULL)
        q = q -> next;

    p -> prev = q;
    q -> next = p;
}

void push_back(node* H, int e) {    //addFirst
    node* p = NULL;
    getNode(&p);
    p -> key = e;

    p -> next = H ->next;
    p -> prev = H;
    if (H -> next != NULL)
        H -> next -> prev = p;
    
    H -> next = p;
}

int pop_front(node* H) {    //deleteLast
    if (H -> next == NULL)
        return -1;
    
    node* p = H;
    
    while (p -> next != NULL)
        p = p -> next;
    
    int tmp = p -> key;
    p = p -> prev;

    free(p -> next);

    p -> next = NULL;

    return tmp;
}

int pop_back(node* H) {     //deleteFirst
    if (H -> next == NULL)
        return -1;
    
    node* p = H -> next;
    int tmp = p -> key;
    H -> next = p -> next;
    if (p -> next != NULL)
        p -> next -> prev = H;
    free(p);

    return tmp;
}

void print(node* H) {
    node* p = H -> next;
    while (p != NULL) {
        printf("[%d] ", p -> key);
        p = p -> next;
    }
    printf("\n");
}

int is_empty(node* H) {
    return (H -> next == NULL);
}

int front(node* H) {
    if (is_empty(H))
        return -1;
    node* p = H;
    while (p -> next != NULL)
        p = p -> next;
    return p -> key;
}

int back(node* H) {
    if (is_empty(H))
        return -1;
    else
        return H -> next -> key;
}

int main() {
    node* H = NULL;
    getNode(&H);

    int i, n, e, size = 0;
    char op[15];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        
        if (strcmp(op, "push_front") == 0) {
            scanf(" %d", &e);
                push_front(H, e);
            size += 1;
        }
        else if (strcmp(op, "push_back") == 0) {
            scanf(" %d", &e);
            push_back(H, e);
            size += 1;
        }
        else if (strcmp(op, "pop_front") == 0) {
            e = pop_front(H);
            printf("%d\n", e);
            if (e != -1)
                size -= 1;
        }
        else if (strcmp(op, "pop_back") == 0) {
            e = pop_back(H);
            printf("%d\n", e);
            if (e != -1)
                size -= 1;
        }
        else if (strcmp(op, "size") == 0) 
            printf("%d\n", size);
        else if (strcmp(op, "empty") == 0) {
            e = is_empty(H);
            printf("%d\n", e);
        }
        else if (strcmp(op, "front") == 0) {
            e = front(H);
            printf("%d\n", e);
        }
        else if (strcmp(op, "back") == 0) {
            e = back(H);
            printf("%d\n", e);
        }
    }
    return 0;
}