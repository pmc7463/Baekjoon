#include <stdio.h>

int main(void)
{
    char arr[4] = "";   // arr 전부 0으로 초기화
    int count = 0;
    int i = 0;
    int temp;
    gets(arr);

    while (arr[i++] > 0)
        count++;
    
    for (i = 0; i < count / 2; i++) {
        temp = arr[i];
        arr[i] = arr[count - i - 1];
        arr[count - i - 1] = temp;
    }

    printf("%s", arr);
    
    return 0;
}