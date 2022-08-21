#include <stdio.h>
#include <string.h>

char text[100];

int main() {    
    int i, len;
    while(1){
        scanf("%[^\n]", text);
        len = strlen(text);
        if(text[0] == '*' && text[1] == '*' && text[2] == '*' && len == 3) break;
        for(i = len - 1; i >= 0; i--)
            printf("%c", text[i]);
    }
    return 0;
}