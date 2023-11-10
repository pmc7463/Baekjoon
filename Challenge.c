#include <stdio.h>
#include <stdlib.h> //malloc 함수가 포함된 헤더 파일
#include <string.h> //strlen(), strcpy(), strcat(), strcmp()...

int main() {
    char str[10000];
    int length;
    int JOI = 0;
    int IOI = 0;
    scanf("%s", str);

    length = strlen(str);

    //printf("%s\n", str);

    //printf("%d\n", length);

    for (int i = 0; i < length; i++) {
        if (str[i] == 'J' && str[i+1] == 'O' && str[i+2] == 'I') 
            JOI++;
        else if (str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I') 
            IOI++;        
    }
    printf("%d\n%d\n", JOI, IOI);

    return 0;
}
