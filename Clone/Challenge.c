#include <stdio.h>
#include <string.h>

int main() {
	char str[1000002];
	int length, count = 0;

	fgets(str, sizeof(str), stdin);

	str[strlen(str) - 1] = '\0';

	length = strlen(str);

	if(length == 1) {
		if(str[0] == ' ') {
			printf("0");
			return 0;
		}
	}

	for(int i = 1; i < length - 1; i++) {
		if(str[i] == ' ')
			count++;
	}

	printf("%d", count + 1);

	return 0;
}