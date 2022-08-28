#include <stdio.h>

int main() {
    int i = 0, max = 0, count = 0;
    char alphabet[1000001];
    int arr[26];
    char capital;
    
    scanf("%s", alphabet);

    for(int i = 0; i < 26; i++) 
        arr[i] = 0;     // 배열 0으로 초기화 
    
    while(alphabet[i] != 0) {
        if(alphabet[i] >= 97 && alphabet[i] <= 122)
            alphabet[i] -= 32;  // 소문자일때 여기서 -32를 해서 대문자로 만들어주기  
        ++arr[alphabet[i] - 65];    // 대문자
        ++i;
    }

    for(int i = 0; i < 26; i++) {
        if(max < arr[i]) 
            max = arr[i];
    }

    for(int i = 0; i < 26; i++) {
        if(max == arr[i]) {
            ++count;
            capital = 'A' + i;
        }
    }
    if(count == 1)
        printf("%c", capital);
    else 
        printf("?");
}