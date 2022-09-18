#include <stdio.h>
#include <string.h>

int main() {
    char N[11] = {0,};  // 최대가 1,000,000,000이므로, 문자열의 크기를 11로 잡았다.
    int temp;

    gets(N);    //입력을 공백 없이 한줄로 받기 위해서 사용

    for (int i = 0; i < strlen(N) - 1; i++) {
        for (int j = i; j < strlen(N); j++) {
            if (N[i] < N[j]) {  // 내림차순
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }
    puts(N);    //정렬된 수 출력

    return 0;
}