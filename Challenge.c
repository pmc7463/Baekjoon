#include <stdio.h>
#include <ctype.h>  // 문자의 종류를 알아내는 라이브러리

int main(void) {
    char arr[257];
    
    while (1) {
        int count = 0;
        fgets(arr, sizeof(arr), stdin);
            if (arr[0] == '#')
                return 0;
            for (int i = 0; arr[i] != '\0'; i++) {
                if (tolower(arr[i]) == 'a' || tolower(arr[i]) == 'e' || tolower(arr[i]) == 'i' || 
                tolower(arr[i]) == 'o' || tolower(arr[i]) == 'u')
                    count++;
            }
            printf("%d\n", count);
    }
    return 0;
}