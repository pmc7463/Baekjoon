#include <stdio.h>

int main() {
    char a[100];
    
    scanf("%s", &a[0]);
    for(int i = 0; a[i] != 0; i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] = a[i] - 32;
        }
        else
            a[i] = a[i] + 32;
    }
    printf("%s", a);
    return 0;
}
