#include <stdio.h>

int main(){
    int input, backNumber = 0;

    scanf("%d", &input);

    if (input == 1010)  // 10 + 10
        printf("20\n");
    
    else if (input % 10 == 0) { // a + 10
        input /= 100;
        printf("%d", 10 + input);
    }
    
    else {
        backNumber += input % 10;
        input /= 10;

        if (input == 10) // 10 + backNumber
            printf("%d\n", 10 + backNumber);
        else    // input + backNumber
            printf("%d\n", input + backNumber);
    }

    return 0;
}