#include <stdio.h>
#include <string.h>

int main() {
    char arr1[1001] = {0,};
    char arr2[1001] = {0,};

    scanf("%s", &arr1);
    scanf("%s", &arr2);
    
    if (strlen(arr1) >= strlen(arr2))
        printf("go\n");
    else
        printf("no\n");
    
    return 0;
}
