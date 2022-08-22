#include <stdio.h>

int main() {    
    int n, min = 1000001, max = -1000001;
    int arr;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr);
    
        if(arr > max) { //max = -1000001
            max = arr;
        }

        if(arr < min) { //min = 1000001
            min = arr;
        }    
    }
    printf("%d %d", min, max);
    
    return 0;
}