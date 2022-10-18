#include <stdio.h>
#include <string.h>

int main() {
	int input;
	char arr[1001] = {'\0', };

	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%s", &arr);
        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}
	return 0;
}