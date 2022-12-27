#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[21];

    int sum = 0, temp = 0, i = 0, cnt = 0;

    scanf("%s", word);

    while (word[i]) {
        if (isupper(word[i]))
            temp = word[i] - 38;
        else if (islower(word[i]))
            temp = 1 + word[i] - 97;
        sum += temp;
        i++;
    }

    for (int i = 2; i < sum; i++) {
        if (sum % i == 0){
            cnt++;
        }
    }

    if (cnt == 0)
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");

    return 0;
}