#include <stdio.h>

int main(void) {
    int num;
    char star = '*';
    
    scanf("%d", &num);
    
    if (num == 1) {
        printf("int a;\n");
        printf("int *ptr = &a;\n");
    }
    else {
        printf("int a;\n");
        printf("int *ptr = &a;\n");
        for (int i = 0; i < num - 1; i++)
            if (i == 0) {
                printf("int **ptr2 = &ptr;\n");
            }
            else {
                printf("int ");
                for (int j = 0; j < i + 2; j++) {
                    printf("%c", star);
                }
                printf("ptr%d = &ptr%d;\n", i + 2, i + 1);
            }
        }
    return 0;
}